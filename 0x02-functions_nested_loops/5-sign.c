#include <stdio.h>
#include <ctype.h>

/**
*print_sign - prints the sign of the number
*/
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
        return (1);
    }
	else if (n == 0)
	{
	    printf("%d",0);
		return (0);	
	}
	else
	{
		printf("-");
		return (-1);
	}
}
