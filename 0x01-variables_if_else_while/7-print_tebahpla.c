#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	do {
		putchar(letter);
	} while (--letter >= 'a');

	putchar('\n');

	return (0);
}

