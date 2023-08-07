#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins.
 * for an amount of money.
 * @argc: count of the arguments.
 * @argv: the array arguments.
 * Return: 1 if numbers then 0 if not.
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins;
	int j;
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents > 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (j = 0; j < 5; j++)
	{
		result = cents / coins[j];
		num_coins += result;
		cents -= result * coins[j];
	}

	printf("%d\n", num_coins);
	return (0);
}
