#include <stdio.h>

/**
 * main - main block
 * Write a program that prints all possible different
 * combinations of two digits.
 * Numbers must be separated by (,), followed by space
 * 01 and 10 are considered as the same combination of 
 * the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with 
 * two digits.
 * You can only use `putchar` function
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x < 56 || y < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
