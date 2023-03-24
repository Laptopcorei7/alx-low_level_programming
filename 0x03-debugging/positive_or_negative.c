#include <stdio.h>
/**
 * positive_or_negative - determines is a number is positive or negative
 * @i: number to be evaluated
 * Return: always + - or zero
 */
void positive_or_negative(int i)
{
        if (i < 0)
                printf("%d is negative", i);
        else if (i > 0)
                printf("%d is positive", i);
        else
                printf("%d is zero", i);
        printf("\n");
}
