#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	char i = 'a';
	
	for(i = 'a';i<='z';i++) {
		if(i != 'q' && i != 'e'){
		
		putchar(i);
		putchar('\n');
	}
	}
	return (0);
}
