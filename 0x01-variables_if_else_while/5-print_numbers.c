#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints numbers for 0 to 9
 * Return: Always (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
