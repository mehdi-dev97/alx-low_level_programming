#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (i == 1)
		{
			total = atoi(argv[i]);
		}
		else
		{
			total *= atoi(argv[i]);
		}
	}
	printf("%d", total);
	return (0);
}
