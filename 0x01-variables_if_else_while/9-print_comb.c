#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that print alphabets separated by comma
 * Return: Always (Success)
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)

{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
