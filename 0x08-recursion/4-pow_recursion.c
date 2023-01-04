#include "main.h"

/**
 * _pow_recursion - main function
 * @x: iput 1
 * @y: input 2
 * Return: int
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
