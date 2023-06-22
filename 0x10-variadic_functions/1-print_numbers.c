#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers- print numbers and separat in symbol
 * @separator: the symbol
 * @n: the number of argument
 * Return: (0)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	
	if (separator == NULL)
	{
		separator = "";
	}

	
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		
		if (i == n - 1)
		{
			printf("%d\n", x);
		}
		printf("%d%c ", x, *separator);
	}
	va_end(args);
}


