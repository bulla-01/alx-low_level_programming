#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: point to the first element
 * Return: Delete the element
 *
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
	return (0);
num = (*gead)->n;
temp = (*head)->next;
free(*head);
*head =temp;
return (num);
}
