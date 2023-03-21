#include "main.h"

/**
* print_alphabet - print all letters a to z
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	int ch = 97;

	while (ch != 123)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
