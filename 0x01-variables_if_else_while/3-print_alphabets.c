#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lower case and upper case
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int a;
	char alphabet[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(i = 'a';i<='z';i++) {
	putchar(i);
	
	}
	for(a = 0;alphabet[a] != '\0';a++) {
	putchar(alphabet[a]);
	
	}
	return (0);
}
