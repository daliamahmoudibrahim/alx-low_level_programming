#include <stdio.h>
/**
 * main- return length the arguments
 * @argc: the number the enter arguments
 * @argv: the array store the arguments
 * Return: the number of arguments
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
