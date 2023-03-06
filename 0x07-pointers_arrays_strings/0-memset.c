#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the address of buffer
 * @b: the address of memory to print
 * @n: the size of the memory to print
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
     unsigned int i;

     i = 0;
     while (i < n)
     {
          s[i] = b;
          i++;
     }

     return s;
}