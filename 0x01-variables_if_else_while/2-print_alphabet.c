#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print alphabets in lowercase
 *		using only putchar twice
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n = 0;
	char alph = 'a';

	while (n++ < 26)
	{
		putchar(alph++);
	}

	putchar('\n');

	return (0);
}
