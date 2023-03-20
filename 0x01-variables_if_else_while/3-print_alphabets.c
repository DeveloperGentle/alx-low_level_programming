#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	char i;
	int a;
	char alphabet[80] = "A\nB\nC\nD\nE\nF\nG\nH\nI\nJ\nK\nL\nM\nO\nP\nQ\nR\nS\nT\nU\nV\nW\nX\nY\nZ\n";
	for(i = 'a';i<='z';i++) {
	putchar(i);
	putchar('\n');
	}
	for(a = 0;alphabet[a] != '\0';a++) {
	putchar(alphabet[a]);
	
	}
	return (0);
}
