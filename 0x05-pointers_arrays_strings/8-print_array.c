#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element of an array of integers
 * @a: A pointer to an integer that will be updated
 * @n: return value n
 * Return: void which means answer is correct
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n")
;
}
