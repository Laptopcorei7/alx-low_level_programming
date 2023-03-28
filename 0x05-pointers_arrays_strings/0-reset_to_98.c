#include <stdio.h>

/**
 * updateValue - Updates the value pointed to by a pointer to an integer.
 *
 * @ptr: Pointer to an integer variable.
 */
void updateValue(int *ptr)
{
	*ptr = 98;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int n = 42;
	int *p = &n;

	printf("The value of n is currently: %d\n", n);

	updateValue(p);

	printf("The value of n is now: %d\n", n);

	return (0);
}

