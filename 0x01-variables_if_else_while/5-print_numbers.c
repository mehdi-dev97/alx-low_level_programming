#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers of base 10 starting from 0.
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
