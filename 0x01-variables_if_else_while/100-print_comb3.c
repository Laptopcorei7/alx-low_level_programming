#include <stdio.h>
/**
 * main - main function
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (j = i; j < 10; j++)
	{
	if (i < j && i != j)
	{
	putchar(i + '0');
	putchar(j + '0');
	if (i + j != 17)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
