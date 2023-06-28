#include <unistd.h>

/**
 * _putchar - A prgram that prints _putchar
 * Return: Always (Success)
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
