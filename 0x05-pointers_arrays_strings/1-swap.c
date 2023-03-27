#include "main.h"
/**
 * swap_int - swap to integer numbers
 * @a: number1
 * @b: number2
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*a = c;
	*b = d;
}
