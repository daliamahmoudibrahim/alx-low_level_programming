#include <stdio.h>
/**
* main - print all letters lowercase reverse
*
* Return: Always 0;
*/
int main(void)
{
	int small;

	for (small = 122; small >= 97; small--)
		putchar(small);
	putchar('\n');
	return (0);
}
