#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints single digits numbers of base 10
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	while(i < 10){
		
	putchar(i + '0');
	
	i = i+1;
	} 
	
	return (0);
}
