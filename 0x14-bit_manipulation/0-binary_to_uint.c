#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary numbers
 * Return: decimal number or 0 if null or -1 in error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
