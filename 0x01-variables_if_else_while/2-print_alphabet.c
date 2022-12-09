#include <stdio.h>

/**
 * main -function here
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		c = 'a';
		putchar(c);
	}
	putchar('\n');
	return (0);
}
