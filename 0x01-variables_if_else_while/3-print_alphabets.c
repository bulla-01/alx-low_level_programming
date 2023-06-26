#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints both lower and uppercase
 * Return: Always (Success)
 */

int main(void)
{
int i = 'a';
int j = 'A';
while (i <= 'z')
{
putchar (i);
i++;
}
while (j <= 'Z')
{
putchar (j);
j++;
}
putchar ('\n');
return (0);
}
