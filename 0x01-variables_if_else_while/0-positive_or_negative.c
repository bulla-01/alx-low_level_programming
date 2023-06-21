/*
 * File: 0-positive_or_negative.c
 * Auth: Frank Sarfo
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 * main - 0-Positive
 *
 * Description: 'The program prints a random number and states whether
 * it is positive, negative or zero
 *
 * RETURN: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
