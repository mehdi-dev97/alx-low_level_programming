#include <stdio.h>
/**
 * main - Entry point
 * Description: prints possible combinations of single-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, counter = 0;
	
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (counter < 9)
		{
			putchar(',');
			putchar(' ');
		}
		counter++;
	}
	return (0);
}
