#include <stdio.h>
#include "lists.h"

/**
 * print_listint prints all the elements of a linked list.
  * @h: This is a linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
size_t counter = 0;

while (h)
{
printf("%d\n", h->n);
++counter;
h = h->next;
}

return (counter);
}
