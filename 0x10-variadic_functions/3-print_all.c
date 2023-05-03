#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 *
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{/* Declaration of Variables */
	va_list args;
	const char *f = format, *str;
	int print_separator = 0;

/* Code Statements */
	va_start(args, format);
	while (*f != '\0')
	{
		if (print_separator)
		{
			printf(", ");
			print_separator = 0; }
		switch (*f)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				print_separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				print_separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				print_separator = 1;
				break;
			case 's':
				{
					str = va_arg(args, const char *);
					printf("%s", str ? str : "(nil)");
					print_separator = 1;
					break; }
			default:
				break;
		}
		f++;
	}
	va_end(args);
	printf("\n");
}
