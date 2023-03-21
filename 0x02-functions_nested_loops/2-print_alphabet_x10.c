#include "main.h"

/**
* print_alphabet_x10 - print all letters a to z 10 times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int x = 0;

	while (x != 10)
	{
		int ch = 97;

		while (ch != 123)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		x++;
	}

}
