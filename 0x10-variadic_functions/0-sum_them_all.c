#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- sum all arguments
 * @n: number of arguments
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			sum += x;
		}
		return (sum);
	}

	va_end(args);
}
