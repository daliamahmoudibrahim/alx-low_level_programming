#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers- print numbers and separat in symbol
 * @*separator: the symbol
 * @n: the number of argument
 * Return: (0)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);
	
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(string , char *);
		if(str == NULL)
		{
			printf("(nil)");
			break;
		}
		if(i == n - 1)
		{
			printf("%s\n", str);
			break;
		}
		printf("%s%s", str, separator);
	}

}
