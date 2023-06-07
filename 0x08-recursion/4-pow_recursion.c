#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of power of 2 numbers
 * @x : the number 1
 * @y : the number 2
 * Return: the value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
