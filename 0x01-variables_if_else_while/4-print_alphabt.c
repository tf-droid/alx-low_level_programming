#include <stdio.h>

/**
 * main - prints all lowercase alphabet except q & e
 * Return: returns 0
 */

int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	putchar('\n');

	return (0);
}
