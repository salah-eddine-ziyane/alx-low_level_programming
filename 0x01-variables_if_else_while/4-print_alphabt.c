#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print alphabets in lowercase
 *		except e and q using only putchar twice
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n = 0;
	char alph = 'a';

	while (n++ < 26)
	{

		if (alph == 'e' || alph == 'q')
		{
			alph++;
			n++;
		}
		putchar(alph++);
	}

	putchar('\n');

	return (0);
}
