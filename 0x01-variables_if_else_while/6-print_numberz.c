#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print from 0 to 10
 *		using only putchar twice
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n = '0';
	int m = 0;

	while (m++ < 10)
	{
		putchar(n++);
	}

	putchar('\n');

	return (0);
}
