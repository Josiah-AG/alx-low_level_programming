#include "main.h"

/**
 * print_most_numbers - prits numbers between 0 to 9
 * Retun: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 0)
			_putchar(i);
	}
	_putchar('\n');
}
