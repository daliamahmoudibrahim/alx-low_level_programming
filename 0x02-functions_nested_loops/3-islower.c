#include "main.h"
/**
 * _islower - if letter lower return 1 else 0
 *
 *@c: letter or assii code of letter
 *
 * Return: 1 or 0;
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
