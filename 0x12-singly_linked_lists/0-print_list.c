#include <stdio.h>
#include "lists.h"
/**
 * print_list- print all elementh: the header
 * @h: the list
 * Return: the size of element
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		(h->str == NULL) ?
			printf("[0] (nill)\n") :
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
