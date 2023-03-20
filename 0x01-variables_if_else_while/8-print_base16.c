#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char base16[50] = "0123456789abcdef";
	int i;
	for(i =0;base16[i] != '\0';i++) {
		if(base16[i] <= 9) putchar(base16[i] + '0');
		else putchar(base16[i]);
	
		putchar('\n');
	}
	
	return 0;
}
