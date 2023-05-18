#include <stdlib.h>
#include "main.h"
/**
 * create_file - Creates a file.
 * standard output.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int openf, writef, count = 0;

	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}

	openf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	writef = write(openf, text_content, count);


	if (openf == -1 || writef == -1)
		return (-1);
	close(openf);
	return (1);
}
