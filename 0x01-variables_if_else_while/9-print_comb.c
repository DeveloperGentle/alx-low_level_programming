#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - prints combinations of single digit numbers
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	for(i=0;i<10;i++) {
		putchar(i + '0');
		if(i != 9) {		
		putchar(',');
		putchar(' ');
	}
	}
	
	return 0;
}
