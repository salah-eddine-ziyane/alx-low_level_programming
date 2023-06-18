#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print alphabets in lowercase
 *		then in upercase using only putchar twice
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n;
	char alph = 'a';

	for (n = 0; n < 26 * 2; n++)
	{
		putchar(alph++);

		if (n == 25)
		{
			alph = 'A';
		}
	}

	putchar('\n');

	return (0);
}
