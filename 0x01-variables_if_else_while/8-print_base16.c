#include <stdio.h>

/**
 * main - main block
 * Write a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Use `putchar’ function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
