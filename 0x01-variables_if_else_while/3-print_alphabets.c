#include <stdio.h>

/**
 * main - prints lowercase and upperletters
 * Return: returns 0
 */

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
		putchar(ALPH);
	}
	putchar('\n');

	return (0);
}
