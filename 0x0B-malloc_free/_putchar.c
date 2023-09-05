#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to sidout
 * @c: The character to print
 *
 * Return: On Success 1
 * On Error: -1 is returned errno is set approriately
 */
int _putchar(char c)
{
return(write(1,&c,1));
}
