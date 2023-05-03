#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line.
 *
 * @separator: character pointer to buffer containing string to be
 * printed between the strings
 * @n:number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{/* Declaration of Variables */
	va_list args;
	unsigned int i;
	const char *str;
/* Code Statements */
	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
		{
			printf("(nil)"); }
		else
		{
			printf("%s", str); }
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator); }
	}
	va_end(args);
	printf("\n");
}
