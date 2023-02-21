#include "main.h"
/*
 * main - entry point.
 * Description: prints _putchar, followed by a new line.
 * Return: 0 (Success).
 */
int main(void)
{
	char str[] = "_putchar\n";
	int ch = 0;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	return (0);
}
