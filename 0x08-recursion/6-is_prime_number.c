#include "main.h"

/**
 * helperFunction - helper function
 * @num: number being checked
 * @i: another check
 * Return: 1
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			return (helperFunction(num, i + 1));
	}
	else
		return (1);
}

/**
 * is_prime_number - main function
 * @n: cheked
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helperFunction(n, 2));
}
