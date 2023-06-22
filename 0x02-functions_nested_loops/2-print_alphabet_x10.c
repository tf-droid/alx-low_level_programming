#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int numOfPrint;
	char alph;

	for (numOfPrint = 0; numOfPrint < 10; numOfPrint++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
