#include<stdio.h>
#include<stdlib.h>
/**
*print_binary - print binary
*@n:theNumber
*Return: (0)
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	
	putchar((n & 1) ? '1' : '0');
}
