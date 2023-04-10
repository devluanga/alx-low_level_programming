#include <stdio.h>
#include "main.h"
#include <stdlib.h>

#define DATA_SIZE 1000
/**
 *read_textfile - function reads a textfile and prints it to the
 *			POSIX standard output
 *@filename: pointer to the file name
 *@letters: number of characters to be read
 *Return: returns 0 if the file cannot be read
 *		if the filename is NULL returns 0
 *		if write fails it returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf, readbytes, write_result;
	size_t totalbyte = 0;
	char val[DATA_SIZE];

	if (filename == NULL)
	{
		return (0);
	}
	openf = open(filename, O_RDONLY);

	if (openf == -1)
	{
		return (0);
	}
	while ((readbytes = read(openf, val, sizeof(val))) > 0)
	{
		totalbyte += readbytes;
		write_result = write(STDOUT_FILENO, val, readbytes);

		if (write_result != readbytes)
		{
			close(openf);
			return (0);
		}
		if (totalbyte >= letters)
		{
			break;
		}
	}
	close(openf);
	return (totalbyte);
}
