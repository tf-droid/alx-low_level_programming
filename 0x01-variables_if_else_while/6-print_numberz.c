#include <stdio.h>

/**
 * main - print all base 10 single digits
 * Return: returns 0
 */

int main(void)
{
	char num = '0';

	for (num = '0'; num <= 10; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
