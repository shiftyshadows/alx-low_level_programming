#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - swaps the values of two integers
 *
 * @size: number being swapped
 * @b: number being swapped
 *
 */


void print_buffer(char *b, int size)
{
/*Declaration of variables*/
	int i, j;

/*Code Statements*/
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", (unsigned char)b[i + j]);
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
				{
					printf("%c", b[i + j]);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}

