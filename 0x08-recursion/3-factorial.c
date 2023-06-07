#include "main.h"
#include <stdio.h>
/**
 * factorial - Prints the factorial of Number
 * @n : the number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
