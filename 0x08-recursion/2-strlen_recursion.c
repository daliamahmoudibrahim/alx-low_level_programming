#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Prints the length of a string.
 * @str: the string
 * Return: the length of string
 */
int _strlen_recursion(char *str)
{
	if (str[0] != '\0')
	{
		return (1 + _strlen_recursion(str + 1));
	}
	return (0);
}
