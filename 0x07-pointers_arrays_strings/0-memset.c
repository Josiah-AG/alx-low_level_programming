#include "main.h"

/**
 * _memset - main function
 * @s: input 1
 * @b: input 2
 * @n: input 3
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
