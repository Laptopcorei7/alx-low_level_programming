#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	char putchar_str[] = "_putchar\n";

	for (i = 0; i < sizeof(putchar_str); i++)
	{
	for (j = 0; j <= i; j++)
	{
	putchar(putchar_str[j]);
	}
	}
	return (0);
}
