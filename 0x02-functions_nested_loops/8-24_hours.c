#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print all hours:minute
 *
 * Return:;
 */
void jack_bauer(void)
{
	int h = 0;
	while (h != 24)
	{
		int m = 0;
		while ( m != 60)
		{

			_putchar(h / 10 + '0');
			_putchar( h % 10 + '0');
                        _putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			 m++;
		}
	
		h++;
	}
}
