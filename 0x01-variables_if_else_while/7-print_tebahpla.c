#include <stdio.h>

/**
 * main - main block
 * Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * Use putchar function 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
