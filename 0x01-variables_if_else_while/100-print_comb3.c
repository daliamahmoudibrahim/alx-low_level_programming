#include <stdio.h>
/**
* main - print group of numbers contine 2 numbers
*
* Return: Always 0;
*/
int main(void)
{
	int i;
	int j;
	int ch = ',';
	int space = ' ';

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 8 && j == 9)
			{
				continue;
			}
			putchar(ch);
			putchar(space);
		}
	}
	putchar('\n');
	return (0);
}
