#include "lists.h"
/**
 * free_listint2 -  Frees the linked list
 * @head: poin to the list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
	return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head =tmp;
}
*head = NULL;
}
