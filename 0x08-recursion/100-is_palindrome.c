#include "main.h"

/**
 * _length - length function
 * @s: input len
 * Return: length
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - cheks
 * @i: input
 * @lg: length
 * @s: another input
 * Return: return
 */

int checkp(int i, int lg, char *s)
{
if (lg > 0)
{
if (s[i] == s[lg])
{
return (checkp(i + 1, lg - 1, s));
}
else if (s[i] != s[lg])
{
	return (0);
}
else
return (1);
}
return (1);
}
/**
 * is_palindrome - main function
 * @s: input
 * Return: return
 */

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
