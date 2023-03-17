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
	int caps;

	for (small = 97; small < 123; small++)
	{
		     putchar(small);
	}
	for (caps = 65; caps < 91; caps++)
	{
		     putchar(caps);
	}
	putchar('\n');
	return (0);
}


