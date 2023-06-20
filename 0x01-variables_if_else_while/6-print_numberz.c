#include <stdio.h>

/**
 * main - main block
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line
 * You are not allowed to use any variable of type char.
 * You can only use `putchar` function
 * You can only use `putchar` twice.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
