#include <stdio.h>
/**
 * main - return all the arguments
 * @argc: the number of arguments
 * @argv: the array to store the arguments
 * Return: the values of arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
