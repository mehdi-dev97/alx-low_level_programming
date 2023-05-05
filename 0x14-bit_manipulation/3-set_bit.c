#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: number to set.
 * @index: The index to set
 * Return: If an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
