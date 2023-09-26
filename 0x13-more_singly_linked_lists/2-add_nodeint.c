#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning
 * @head: point to the the first node
 * @n: data to be inserted
 * Return: Points to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->n = *head;
*head = new;

return (new);
}
