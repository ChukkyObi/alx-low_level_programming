#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: pointer to block of memory to be filled
 * @b: value
 * @n: memory byte
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned in i;

for (i = 0; i < n; i++)
*(s + 1) = b;

return (s);
}
