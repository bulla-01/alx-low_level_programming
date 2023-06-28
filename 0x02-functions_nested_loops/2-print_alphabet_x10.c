#include "main.h"

/**
 * void print_alphabet_x10 - prints alphabets 10 times
 * Return: Always (Success)
 */

void print_alphabet_x10(void)
{
char l;
int i = 1;

while (i <= 10)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
i++;
}
}
