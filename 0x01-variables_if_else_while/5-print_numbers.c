#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers from 0 to 10 then new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
