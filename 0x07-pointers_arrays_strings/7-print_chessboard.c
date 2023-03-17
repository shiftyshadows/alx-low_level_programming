#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
/*Declaration of variables*/
	int i, j;

/* Code Statements */
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
	_putchar('\n');
	}
}

