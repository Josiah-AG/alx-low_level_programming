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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	return (dest);
