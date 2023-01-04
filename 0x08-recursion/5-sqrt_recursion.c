#include "main.h"
/**
 * find_sqrt - main function
 * @num: first number
 * @root: second number
 * Return: sqrt
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));

}
/**
 * _sqrt_recursion - main function
 * @n: input
 * Return: int
 */

int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, root));
}
