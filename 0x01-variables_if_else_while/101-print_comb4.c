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
	int d;
	int ch = ',';
	int space = ' ';

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (d = j + 1; d <= 9; d++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + d);
				if (i == 7 && j == 8 && d == 9)
				{
					continue;
				}
				putchar(ch);
				putchar(space);
			}
		}
	}
	putchar('\n');
	return (0);
}
