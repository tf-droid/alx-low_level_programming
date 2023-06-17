#include <unistd.h>
#include <string.h>

/**
 * main - printing without using printf or puts
 * Return: returns 1
 */

int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, strlen(msg));

	return (1);
}
