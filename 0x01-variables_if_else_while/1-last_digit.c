#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point
 *              of the program. It generates a random number,
 *              calculates its last digit, and determines
 *              whether it is greater than 5, equal to 0,
 *              or less than 6 and greater than 0.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}
