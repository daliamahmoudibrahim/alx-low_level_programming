#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- return a nother function
 * @array: the array
 * @size: the number of array
 * @action: a nother arrar
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
