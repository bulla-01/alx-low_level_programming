#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that assign a random number each time is executed
 * Return: 0(Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x = n % 10;
	if ( x > 5 )
	{
	   	printf("The last digit of %d is %d and is greater 5\n", n, x);
	}
	else if ( x = 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, x);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
