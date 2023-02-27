#include <unistd.h>

/**
 * _putchar - print the character ch to cout
 * @ch: The character to print
 *
 * Return: 0 Success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
