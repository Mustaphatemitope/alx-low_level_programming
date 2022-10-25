#include "main.h"
#include <string.h>

/**
* void print_rev - prints the string in reverse
* @s: a pointer to a string
*/

void print_rev(char *s)
{
	int i;

	int total = strlen(s);

	for (i = total - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

