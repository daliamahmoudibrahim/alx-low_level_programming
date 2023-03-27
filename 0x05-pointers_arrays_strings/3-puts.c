#include "main.h"
#include "stdio.h"
/**
 * _puts - print string
 *@str: char
 * Return:(0)
 */
void _puts(char *str)
{
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
