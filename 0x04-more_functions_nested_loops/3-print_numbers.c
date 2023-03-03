#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: number being swapped
 * @b: number being swapped
 *
 */

void swap_int(int *a, int *b)
{
/*Declaration of variables*/
        int c;

/*Code Statements*/
        c = 0;
        c = *a;
        *a = *b;
        *b = c;
}
