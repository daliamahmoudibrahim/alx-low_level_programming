#include "main.h"
/**
 * print_diagonal - print '-' times variable n
 * @n: number
 * Return: (0)
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j <= i ;)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
