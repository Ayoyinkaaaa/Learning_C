#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
				case 'f':
				printf("%s%d", sep, va_arg(args, int));
				break;
				case 's':
				str = va_arg(args, char *);
				if (!str)
					str = ")(nil)";
				printf("%s%s", sep, str);
				break;
				default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
