#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	
	for(i = 'a';i<='z';i++) {
		if(i != 'q' && i != 'e'){
		
		putchar(i);

	}
	}
	return (0);
}
