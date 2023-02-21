#include "main.h"
/**
 * print_alphabet - entry point
 * Description: print alphabet then new line.
 * Return: Always void.
 */
void print_alphabet(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		_putchar(ch);	
	}
	_putchar('\n');
}
