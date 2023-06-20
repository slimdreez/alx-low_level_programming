#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main – main block
 * This program will assign a random number to the
 * variable n each time it is executed
 * And states whether it is positive, negative or zero
 * The variable n will store a different value every time
 * you will run this program
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
