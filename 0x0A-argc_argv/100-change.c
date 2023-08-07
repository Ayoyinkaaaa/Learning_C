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
	int num_coins, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_coins = atoi(argv[1]);
	result = 0;

	if (num_coins < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num_coins >= 0; i++)
	{
		while (num_coins >= coins[i])
		{
			result++;
			num_coins -= coins[i];
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
