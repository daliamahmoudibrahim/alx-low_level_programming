#include <stdio.h>
/* more headers goes there */
/**
* main - print all letters lowercase use putchar only
*
* Return: Always 0;
*/
/* betty style doc for function main goes there */
int main(void)
{
	int small;

	for (small = 97; small < 123; small++)
	{
		putchar(small);
	}
	putchar('\n');
	return (0);
}
