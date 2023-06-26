#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints lowercase without e and q
 * Return: Always (Success)
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)

{
if (i != 'e' && i != 'q')
{
putchar (i);
}
putchar ('\n');
return (0);
}
}
