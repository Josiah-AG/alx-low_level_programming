#include "main.h"

/**
 * print_array - mainfunction
 * @a: input one
 * @n: input two
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		pritf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
