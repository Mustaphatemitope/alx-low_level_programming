#include "main.h"
#include <string.h>

/**
* puts2 - print every other character of a string
* @str: pointer to the string
*/

void puts2(char *str)

{
	int i;

	int total = strlen(str);

	for (i = 0; i < total; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);

		}

	}
	_putchar('\n');
}

