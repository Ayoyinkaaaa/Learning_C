#include <stdio.h>
/**
 * main- prints the name of the file the program was compiled from.
 * Description: prints all argument received
 * Return: Always 0(success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

