#include "main.h"

/**
 * _strncat - main function
 * @dest: first input
 * @src: 2nd input
 * @n: the maximum number
 * Return: destination function
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
