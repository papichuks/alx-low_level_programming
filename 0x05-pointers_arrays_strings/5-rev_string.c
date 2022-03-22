#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int temp;

	while (s[i] != '\0')
	{
		j = i++;
	}
	j = j - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
