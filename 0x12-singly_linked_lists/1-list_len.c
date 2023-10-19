#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_len - This returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)

{
	size_t excel;
	excel = 0;

	while (h != NULL)

	{
		h = h->next;
		excel++;
	}

	return (excel);
}
