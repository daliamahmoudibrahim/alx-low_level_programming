#include <stdio.h>
/**
* main - print all letters lowercase and Uppercase use putchar only
*
* Return: Always 0;
*/
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	putchar('\n');
	return (0);
}
