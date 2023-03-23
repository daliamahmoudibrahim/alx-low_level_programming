#include <stdio.h>
/**
 * print_fizzbuzz - print fizz or buzz or fizzbuzz
 * main - call function print_fizzbuzz
 *
 * Return: (0)
 */
void print_fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int condition = (i % 3 == 0 && i % 5 == 0);

		if (condition)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		printf(" ");
	}
	putchar('\n');
}
/**
 * main - call function print_fizzbuzz
 *
 * Return: (0);
 */
int main(void)
{
	print_fizzbuzz();
	return (0);
}
