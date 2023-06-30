#include "main.h"
/**
 * print_last_digit - Print last digit of a given number
 * @n: The number to be treated
 * Return: Always (Success)
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
