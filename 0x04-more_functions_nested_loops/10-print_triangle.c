#include "main.h"
/**
*print_triangle - prints a triangle
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int y = size;
		for (i = 0; i < size; i++)
		{
			int j;
			for (j = 0; j < size; j++)
			{
				if (j >= (y - 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
            _putchar('\n');
            y--;
	    }
    }
	else
	{
		_putchar('\n');
	}
}
