#include "main.h"

/**
 * swap_int - main function
 * @a: first input
 * @b: second input
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int vala = *a;

	*a = *b;
	*b = vala;
}
