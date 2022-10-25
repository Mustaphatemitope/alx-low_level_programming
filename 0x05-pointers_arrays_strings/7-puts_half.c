#include "main.h"
#include <string.h>

/**
* puts_half - prints half of thr string
* @str: pointer to the string
*/

void puts_half(char *str)

{

	int i;

	int total = strlen(str);

	if (total % 2 == 0)
	{
		for (i = total / 2; i < total; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (total % 2 != 0)
	{
		for (i = (total + 1) / 2; i < total; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

