#include <stdio.h>

/**
* main : print word _putchar
*
* Return: (0)
*/
char _putchar (char c);
int main (void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar( *ch );
		ch++;
		
	}
	_putchar('\n');
	return 0;
}
