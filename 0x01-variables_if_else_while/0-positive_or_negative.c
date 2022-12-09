#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the main function is to deffrentiate negative vs postive
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negatice number\n", n);
	}

	return (0);
}
