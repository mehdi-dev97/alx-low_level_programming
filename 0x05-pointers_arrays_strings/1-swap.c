#include <stdio.h>
/**
 * swap_int - entry point.
 * Description: swaps the values of two integers.
 * @a: first pointer.
 * @b: second pointer.
 * Return: Always void (Success).
 */
void swap_int(int *a, int *b)
{
	int old_a = *a,
	    old_b = *b;
	
	*a = old_b;
	*b = old_a;
}
