#include <stdio.h>

/**
 * main - main block
 * Write a program that prints the alphabet in lowercase, followed by a new line.
 * use `putchar` function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
