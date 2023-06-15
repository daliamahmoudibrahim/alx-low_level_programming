#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked- check the code
 *@b: the integer
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
