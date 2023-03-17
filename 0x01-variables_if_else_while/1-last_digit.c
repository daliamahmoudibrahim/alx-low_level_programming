#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - last number an compere it
*
* Return: Always 0;
*
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_number;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastnumber = abs(n % 10);
	printf("Last digit of %d is %d ", n, last_number);
	if (last_number > 5)
		printf("and is greater than 5\n");
	else if (last_number == 0)
		printf("and is 0 \n");
	else
		printf("and is less than 6 and not 0 \n");
	return (0);
}
