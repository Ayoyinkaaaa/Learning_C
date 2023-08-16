#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function
 * @argv: array of pointers
 * @argc: number of arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*operator)(int a, int b);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((strcmp(argv[2], "/")) || (strcmp(argv[2], "%"))) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	result = operator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
