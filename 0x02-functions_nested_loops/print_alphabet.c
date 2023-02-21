#include <stdio.h>
/**
 * main - check the code
 * Description: print alphabet then new line.
 * Return: void (Success).
 */
void print_alphabet(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);	
	}
	putchar('\n');
}
