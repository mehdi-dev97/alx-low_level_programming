#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int c;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; c <= argv[i][c]; c++)
		{
			if (isdigit(argv[i][c]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}	
	
		total += atoi(argv[i]);

	}
	printf("%d\n", total);
	return (0);
}
