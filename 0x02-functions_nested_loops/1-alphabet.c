#include <stdio.h>

/**
*print_alphabet - prints out the alphabet in lowercase
*/
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i < 'z'; i++)
	{
		printf("%c", i);
	}
	printf("\n");
}
