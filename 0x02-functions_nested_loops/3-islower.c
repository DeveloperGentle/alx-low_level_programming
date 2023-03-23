#include <stdio.h>
#include <ctype.h>

/**
*_isLower - check for low character
*/
int _islower(int c)
{
	if (islower(c))
	return (1);
	else
	return (0);
}
