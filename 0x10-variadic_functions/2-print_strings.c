#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed my a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * @...: A variable of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
