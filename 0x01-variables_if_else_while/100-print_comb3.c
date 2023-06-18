#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print all combinations possible
 *		of 2 digits.
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n = '0';
	int m = '0';
	int i, j;

	for (i = 0; i < 9; i++)
	{
		m = n + 1;

		for (j = i + 1; j < 10 && m <= '9'; j++)
		{
			putchar(n);
			putchar(m++);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		n++;
	}

	putchar('\n');

	return (0);
}
