#include "main.h"
#include <unistd.h>

/**
 * alphabet - prints lowercase alphabet
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
