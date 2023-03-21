#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - print last digit in number
 * @n: is a number
 * Return: 0
 */
int print_last_digit(int n)
{
	int r = abs(n) % 10;

	_putchar(r + '0');
	return (r);
}
