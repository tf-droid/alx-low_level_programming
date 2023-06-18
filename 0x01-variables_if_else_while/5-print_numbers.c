#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: returns 0
 */

int main(void)
{
	int num = 1;

	for (num = 1; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");

	return (0);
}
