#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints lowercase without e and q
 * Return: Always (Success)
 */

int main(void)
{
int i = 'a';

while (i <= 'z' && i != 'e' && i != 'q')
{
putchar (i);
i++;
}
putchar ('\n');
return (0);
}
