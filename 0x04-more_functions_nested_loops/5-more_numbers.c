#include "main.h"
#include <ctype.h>

/**
*more_numbers - print the numbers from 0 to 14 ten times
*/
void more_numbers(void)
{
	int i;
	for (i = 0; i < 11; i++)
	{
		int j;
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
