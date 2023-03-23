#include "main.h"
/**
 * print_most_numbers - print all number from 0 to 9 expect 2 and 4
 * Return: (0)
 */
void print_most_numbers(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		int condition = (i == 2 || i == 4);

		if (condition)
			continue;
		_putchar(i + '0');
		
	}
	_putchar('\n');
}
