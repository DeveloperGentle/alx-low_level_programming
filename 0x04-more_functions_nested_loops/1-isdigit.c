#include "main.h"
#include <ctype.h>

/**
*_isdigit - checks if argument is a digit
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
