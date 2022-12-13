#include "main.h"

/**
 * print_last_digit - prints the last digit of number
 * @n: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a *= -1;
	}
	_putchar (a); _putchar(a);
	return (0);
}
