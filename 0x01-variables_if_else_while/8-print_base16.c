#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers of base 16 in lower then new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	char hexn;

	for (hexn = '0'; hexn <= '9'; hexn++)
	{
		putchar(hexn);
	}
	for (hexn = 'a'; hexn <= 'f'; hexn++)
	{
		putchar(hexn);
	}
	putchar('\n');
	return (0);
}
