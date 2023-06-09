#include <stdio.h>
#include <stdlib.h>

/**
 * main - return result of the multiplication
 * @argc: the number of arguments
 * @argv: the array to store the arguments
 * Return: the result of multiplication for 2 numbers
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
