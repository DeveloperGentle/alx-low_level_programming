#include <stdio.h>
#include <ctype.h>

/**
*_isaplha - check for alphabetic character
*/
int _isalpha(int c)
{
	if (isalpha(c))
	return (1);
	else
	return (0);
}
