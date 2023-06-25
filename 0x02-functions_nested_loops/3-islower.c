#include <unistd.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: takes an integer as argument
 * Return: returns 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}

