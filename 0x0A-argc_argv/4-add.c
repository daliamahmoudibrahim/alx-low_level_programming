#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - return add the arguments
 * @argc: the number of arguments
 * @argv: the array to store datatype
 * Return: return sum of numbers
 */
int main(int argc, char *argv[])
{
	int i;


	int sum;

	if(argc == 1)
	{
		printf("0\n");
	}
	for(i = 0; i < argc; i++)
	{
		char *arg = argv[i];

		if(!isdigit(arg))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(arg);
	}
	printf("%d\n",sum);
	return (0);
	
}
