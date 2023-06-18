#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print from 0 to 10
 *		seperated by ',' using only putchar max 4 times
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

		if (m <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
