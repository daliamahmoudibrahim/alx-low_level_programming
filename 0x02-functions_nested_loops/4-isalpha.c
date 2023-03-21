#include "main.h"
/**
 * _isalpha - check if is letter uppercase or lowercase
 * @c: is letter or assii code of letter
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int condition = (c >= 97 && c <= 122) || (c >= 65 && c <= 90);

	if (condition)
		return (1);
	else
		return (0);
}
