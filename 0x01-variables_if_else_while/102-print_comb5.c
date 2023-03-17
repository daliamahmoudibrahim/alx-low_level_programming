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
	int k;
	int ch = ',';
	int space = ' ';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (d = 0; d <= 9; d++)
			{
				for (k = 0; k <= 9; k++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(space);
					putchar('0' + d);
					putchar('0' + k);
					if (i == 9 && j == 8 && d == 9 && k == 9)
					{
						continue;
					}
					putchar(ch);
					putchar(space);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
