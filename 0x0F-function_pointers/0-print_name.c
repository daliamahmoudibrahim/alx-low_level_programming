#include <stdio.h>
/**
 * print_name- print name
 * @name:name
 * @f:the function
 * Return: return function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
