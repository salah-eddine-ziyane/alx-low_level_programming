#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print all combinations possible
 *		of 3 digits.
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n = '0';
	int m = '0';
	int l = '0';
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		m = n + 1;

		for (j = i + 1; j < 9 && m < '9'; j++)
		{
			l = m + 1;

			for (k = j + 1; k < 10 && l <= '9'; k++)
			{

				putchar(n);
				putchar(m);
				putchar(l++);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}

			}

			m++;
		}

		n++;
	}

	putchar('\n');

	return (0);
}
