#include <stdio.h>

/**
 * main - entry point
 * Description - print all the arguments received
 * @argv: number of command line arguments
 * @argc: array of command line arguments.
 *
 * Return: 0 if the program executes successfully.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
