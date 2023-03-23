#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all number until 98
 * @num: the number start loop to 98
 * Return: (0)
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num != 99)
		{
			if(num == 98)
			{
				printf("%d",num);
			
			}
			else
			{
				printf("%d, ",num);
			}
			num--;
		}
	}
	else
	{
		while (num != 99)
		{
			if(num == 98)
			{
				printf("%d",num);
		
			}
			else
			{
				printf("%d, ",num);
			}
			num++;
		}
	}
	printf("\n");
}
