#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of
 * a file.
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: integer.
 */


int append_text_to_file(const char *filename, char *text_content)
{
/* Declaration of variables */
	int result;
	FILE *fp;

/* Code Statements */
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	result = fprintf(fp, "%s", text_content);
	fclose(fp);
	if (result < 0)
	{
		return (-1);
	}
	return (1);
}

