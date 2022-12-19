#include "main.h"

/**
 * puts_half - main function
 * @str: input
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++
	}

	if (i % 2 == 0)
	{
		int j = 0;

		for (j = 0; j <= i / 2; j++)
			_putchar(str[j]);
	}
	else
	{
		int k = 0;

		for (k = 0; k <= ((i / 2) - 1); k++)
			_putchar(str[k]);
	}
}
