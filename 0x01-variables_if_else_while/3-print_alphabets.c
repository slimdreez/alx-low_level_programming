#include <stdio.h>

/**
 * main - main block
 * Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Use `putchar` functions
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
