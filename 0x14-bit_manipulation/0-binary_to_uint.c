#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsig int
 * @b: binary number to be converted
 * Return: the unsigned int corresponding to binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

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
