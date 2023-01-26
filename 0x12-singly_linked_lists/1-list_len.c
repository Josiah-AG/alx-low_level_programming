#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number
 * @h: pointer
 * Return: number
 */

size_t list_len(const list_t *h)
{
size_t b = 0;

while (h)
{
b++;
h = h->next;
}

return (b);
}
