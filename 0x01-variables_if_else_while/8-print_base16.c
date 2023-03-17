#include <stdio.h>
/**
* main - print all hexdecimal number base 16
*
* Return: Always 0;
*/
int main(void)
{
	int small;
	int hex;

	for (small = 0; small < 10; small++)
		putchar('0' + small);
	for (hex = 97; hex < 103; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
