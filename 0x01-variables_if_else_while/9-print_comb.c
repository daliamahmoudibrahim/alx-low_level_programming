#include <stdio.h>
/**
* main - print numbers in way 1, 2, 3,
*
* Return: Always 0;
*/
int main(void)
{
	int num;
	int ch = ',';
	int space = ' ';

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num == 9)
		{
			continue;
		}
		putchar(ch);
		putchar(space);
	}
	putchar('\n');
	return (0);
}
