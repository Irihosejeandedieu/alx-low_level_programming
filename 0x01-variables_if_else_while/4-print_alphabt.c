#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * excluding 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)

{

	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	letter++;
	}
	putchar('\n');
	return (0);
}
