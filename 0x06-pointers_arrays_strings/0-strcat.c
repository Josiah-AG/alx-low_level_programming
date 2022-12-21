#include "main.h"

/**
 * _strcat - Main fuction
 * @dest: Fist input
 * @src: 2nd input
 * Return: returs the pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
