#include "main.h"
/**
 * print_square - print # in shape square
 * @s: number size
 * Return: (0)
 */
void print_square(int s)
{
	if (s <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < s; i++)
		{
			int j;

			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
