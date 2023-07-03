#include "main.h"
#include <unistd.h>
/**
 * _putcher - writes the character c to sdtout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1))
}
