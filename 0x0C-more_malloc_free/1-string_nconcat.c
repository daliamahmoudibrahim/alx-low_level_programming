#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concat the strings
 * @s1: string number1
 * @s2:string number2
 * @n:how many char to return from string number2
 * Return: the complete string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	for (i = 0; s1[i] != '\0'; i++)
		;

	concat = (char *)malloc(i + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		concat[j] = s1[j];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';
	return (concat);
}
