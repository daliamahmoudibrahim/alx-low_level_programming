#include <stdio.h>
/**
* main - print all letters lowercase and Uppercase use putchar only
*
* Return: Always 0;
*/
/* betty style doc for function main goes there */
int main(void)
{
	int small;

	for (small = 97; small < 123; small++)
	{
		if (small == 101 || small == 113)
		{
			continue;
		}
		    putchar(small);
	}

	putchar('\n');
	return (0);
}
