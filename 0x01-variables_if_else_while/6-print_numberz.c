#include <stdio.h>
/**
* main - print all letters lowercase and Uppercase use putchar only
*
* Return: Always 0;
*/
int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
