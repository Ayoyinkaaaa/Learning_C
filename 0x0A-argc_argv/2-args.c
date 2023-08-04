#include <stdio.h>

/**
 * main - entry point
 * Description - print all the arguments received
 * @argv: number of command line arguments
 * @argc: array of command line arguments.
 *
 * Return: 0 if the program executes successfully.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
