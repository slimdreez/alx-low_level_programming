#include <stdio.h>

/**
 * main - main block
 * Write a program that prints all possible
 * combinations of single-digit numbers
 * Numbers must be separated (,), followed by space.
 * Use `putchar` function
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
