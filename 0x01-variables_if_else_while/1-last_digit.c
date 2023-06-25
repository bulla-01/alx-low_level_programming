/*
 * File: The last digit
 * Auth: Frank Sarfo
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program to assign random number and determine if its last number is greater than 5 or zero
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

	if (x > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x = 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, x);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
