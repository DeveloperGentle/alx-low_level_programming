#include <stdio.h>

/*
*fizz_buzz - prints 1 to 100 based on various conditions
*/
void fizz_buzz(void)
{
	int i;
	for (i = 0; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
