#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks digit
 * @c: char to chek
 * Return: 0 ot 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

