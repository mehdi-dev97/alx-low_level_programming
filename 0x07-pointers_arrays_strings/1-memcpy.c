#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: address of destination
 * @src: address of source
 * @n: the size of the memory to print
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
    	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
