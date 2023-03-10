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
	int total = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		total *= atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
