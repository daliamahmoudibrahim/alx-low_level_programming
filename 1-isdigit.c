#include "main.h"
/**
 * _isdigit - check if is digit or otherwise
 * @c: is a char check it
 * Return: 0 or 1;
 */
int _isdigit(int c)
{
	int condition = (c >= '0' && c < '9');
	if (condition)
		return (1);
	else
		return (0);
}
