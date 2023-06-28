#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer parameter
 * @b: integer pointer parameter
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
