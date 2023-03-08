#include "main.h"

/**
 * _pow_recursion - calculate value of x raised by power y
 * @x: given number
 * @y: power number
 * Return: value of power
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
