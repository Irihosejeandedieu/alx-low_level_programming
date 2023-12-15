#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a program that prints alphabet in lower case,
 * followed by a new line.
 * Return: Always 0.
 */

int main(void)

{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
