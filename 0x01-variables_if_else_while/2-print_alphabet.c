#include <stdio.h>

/**
* main - This program prints the lowercase alphabet using the putchar function.
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	putchar('\n');

	return (0);
}

