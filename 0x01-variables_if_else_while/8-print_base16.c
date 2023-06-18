#include <stdio.h>

/**
 * main - Entry point of this program
 *
 * Description: this function serves to print numbers of base 16 in lowercase
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int n = 0;
	int num = '0';
	char alph = 'a';

	while (n++ < 16)
	{

		if (num <= '9')
		{
			putchar(num++);
		}
		else
		{
			putchar(alph++);
		}
	}

	putchar('\n');

	return (0);
}
