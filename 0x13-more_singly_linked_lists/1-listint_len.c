#include "lists.h"

/**
 * listint_len -Prints the number of elemennts
 * @h: tor travers
 * Return: No of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
