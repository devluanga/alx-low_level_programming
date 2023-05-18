#include "main.h"
#include <stdio.h>
/**
 *append_text_to_file - appends to a file
 *@filename: pointer to the filename
 *@text_content: character to add to the file
 *Return: returns 1 on success
 *		 -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	openf = open(filename, O_WRONLY | O_APPEND);
	writef = write(openf, text_content, count);

	if (openf == -1 || writef == -1)
	{
		return (-1);
	}
	close(openf);
	return (1);
}
