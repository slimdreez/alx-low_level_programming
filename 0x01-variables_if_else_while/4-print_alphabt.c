#include <stdio.h>

/**
 * main – main block
 * Write a program that prints the alphabet in lowercase, followed by a new line.
 * Except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(c);
		}
		x++;
	}

	putchar('\n');
	return (0);
}
