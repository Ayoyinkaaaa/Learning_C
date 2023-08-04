#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiply 2 numbers
 * @argc: check all parameters
 * @argv: check all parameters
 *
 * Return: 0 if the program executes successfully
 *
 */
int main(int argc, char *argv[])
{
	int var1;
	int var2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	var1 = atoi(argv[1]);
	var2 = atoi(argv[2]);
	result = var1 * var2;
	printf("%d\n", result);
	return (0);
}
