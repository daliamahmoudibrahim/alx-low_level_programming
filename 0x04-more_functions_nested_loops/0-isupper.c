#include <stdio.h>
/**
 * _isupper - check if letter upper or not
 *  @c: is char
 *
 *  Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
