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
	ssize_t openf, readf, writef;
	char *val;

	if (filename == NULL)
		return (0);

	val = malloc(sizeof(char) * letters);
	if (val == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	readf = read(openf, val, letters);
	writef = write(STDOUT_FILENO, val, readf);

	if (openf == -1 || readf == -1 || writef == -1 || writef != readf)
	{
		free(val);
		return (0);
	}

	free(val);
	close(openf);

	return (writef);
}
