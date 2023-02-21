#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar\n'
 * Return: Always 0 (success)
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
