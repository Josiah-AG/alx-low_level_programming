#include "main.h"

/**
 * print_alphabet_x10 - Writes the alphabet 10
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 1; n <= 10; n++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
