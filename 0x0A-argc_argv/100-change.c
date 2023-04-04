#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - program that prints number of arguments passed to it.
 *
 * @cents: change that requires coins
 *
 * Return: 0 (Success) / Number of coins used
 */


int minCoins(int cents)
{
	int coinValues[] = {25, 10, 5, 2, 1};
	int coinsUsed = 0;
	int i = 0;


	if (cents < 0)
	{
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coinsUsed += cents / coinValues[i];
		cents = cents % coinValues[i];
	}
	return (coinsUsed);
}

/**
 * main - program that prints number of arguments passed to it.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of pointer to arguments passed to main function
 *
 * Return: 0 (Success)
 */


int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", minCoins(cents));
	return (0);
}
