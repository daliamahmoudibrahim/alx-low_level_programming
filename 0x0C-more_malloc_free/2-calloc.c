#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - return the memory address
 * @nmemb: the number of bytes
 * @size: size the memory
 * Return: Null or ptr;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*ptr = ptr[i];
	}
	return (ptr);
}
