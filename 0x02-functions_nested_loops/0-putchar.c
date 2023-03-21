#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 1; i++)
	{
	for (j = 0; j < 8; j++)
	{
	if (j == 0)
	putchar('_');
	else if (j == 1)
	putchar('p');
	else if (j == 2)
	putchar('u');
	else if (j == 3)
	putchar('t');
	else if (j == 4)
	putchar('c');
	else if (j == 5)
	putchar('h');
	else if (j == 6)
	putchar('a');
	else if (j == 7)
	putchar('r');
	}
	putchar('\n');
	}

	return (0);
}
