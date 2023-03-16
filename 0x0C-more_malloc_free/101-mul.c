#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char *num1, char *num2);

/**
 * main - program that multiplies two positive numbers.
 *
 * @argc: pointer to first string
 * @argv: pointer to second string
 *
 * Return: Concatenated string
 */

int main(int argc, char *argv[])
{
/* Declaration of Variables */
	char *num1 = argv[1];
	char *num2 = argv[2];
	int result, i;

/* Code Statements */
	if (argc != 3)
	{
		printf("Error\n");	/* Print error message if the number
					 * of arguments is incorrect
					 */
		return (98);
	}


/* Check if num1 and num2 contain only digits */
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");	/* Print error message if num1is
						 * not a positive number
						 */
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");/* Print error message if num2 is not a positive number */
			return (98);
		}
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}

/**
 * multiply - function that multiplies two values stored in memory.
 *
 * @num1: pointer to first string
 * @num2: pointer to second string
 *
 * Return: Integer Result
 */

int multiply(char *num1, char *num2)
{
/* Declaration of Variables */
	int	len1 = 0, len2 = 0, *result, i, j, digit1,
		digit2, product, pos1, pos2, res, sum;

/* Calculate the lengths of num1 and num2 */
	while (num1[len1] != '\0')
	{
		len1++;
	}
	while (num2[len2] != '\0')
	{
		len2++;
	}

	result = calloc(len1 + len2, sizeof(int));	/* Allocate memory for
							 * the result array
							 */
	if (result == NULL)
	{
		printf("Error\n"); /* Print error message if calloc fails */
		exit(98);
	}

/* Multiply digits of num1 & num2 and store the result in the result array */
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;

			pos1 = i + j;
			pos2 = i + j + 1;
			sum = result[pos2] + product;

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

/* Find the position of the first non-zero digit in the result array */
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
	{
		i++;
	}

	res = 0;
/* Convert the result array to an integer */
	for (; i < len1 + len2; i++)
	{
		res = res * 10 + result[i];
	}

	free(result); /* Free the memory allocated for the result array */

	return (res);
}
