#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: A pointer to an int that will be updated
 * @b: A pointer to an int that will be updated
 * Return: void that means answer is correct
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
