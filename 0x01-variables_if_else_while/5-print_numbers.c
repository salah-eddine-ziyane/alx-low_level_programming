#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print from 0 to 9
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	putchar('\n');

	return (0);
}
