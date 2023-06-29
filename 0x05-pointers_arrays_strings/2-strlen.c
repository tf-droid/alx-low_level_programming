#include "main.h"
#include <unistd.h>

/**
 * _strlen - returns length of string
 * @s: char pointer
 * Return: returns length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	
	return length;
}
