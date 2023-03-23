#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - prints lowercase in reverse
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	
	for(i = 'z';i>='a';i--)  {
		putchar(i);
		
	}
	
	return 0;
}
