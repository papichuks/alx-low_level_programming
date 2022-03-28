#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory are to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */

char *memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
