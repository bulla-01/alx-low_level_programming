#include "lists.h"

/**
 * print_listin - A program that prints all the elements of the linked list
 * @h: type to print
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h);
{
size_t num = 0;
while (h)
{
printf("%d\n", h->i);
num++;
h = h->n;
}
return (num);
}
