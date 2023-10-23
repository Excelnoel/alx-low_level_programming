#include <string.h>
#include "lists.h"

/**
 * free_listsint - frees a singly linked list
 * @heead: a linked list to print
 *
 * Retur: void.
 */
 
void free_listint(listint_t *head)
{
 listint_t *tmp_node;

 while (head)
 {
  tmp_node = head;
  head = head->next;
  free(tmp_node);
 }
}
