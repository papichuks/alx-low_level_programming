#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print a-z 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}