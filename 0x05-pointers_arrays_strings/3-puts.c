#include "main.h"

/**
 * _puts - Main function
 * @str: input
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
