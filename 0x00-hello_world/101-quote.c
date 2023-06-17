#include <unistd.h>
#include <string.h>

/**
 * main - printing without using printf or puts
 * Return: returns 1
 */

int main(void)
{
	const char *msg1 = "and that piece of art is useful\" - ";
	const char *msg2 = "Dora Korpar, 2015-10-19\n";
	char msg[100];

	strcpy(msg, msg1);
	strcat(msg, msg2);

	write(2, msg, strlen(msg));

	return (1);
}
