#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - prints lowercase alphabet
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}
