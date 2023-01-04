#include "main.h"

int is_divisible(int num, int div);

/**
 * is_divisible - main function
 * @num: num
 * @div: divis
 * Return: result
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
