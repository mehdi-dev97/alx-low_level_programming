#include "main.h"
/**
 * _puts - entry point.
 * @str: string.
 * Description: prints a string, followed by a new line to stdout.
 * Return: void (Success).
 */
void _puts(char *str)
{
	int i;
		
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
