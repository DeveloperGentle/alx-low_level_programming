#include <stdio.h>
#include <math.h>

/**
*prime_factor - finds primefactor of 612852475143
*/
void prime_factor(void)
{
	long long int num = 612852475143;
	long long int i, largest_prime = -1;
	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}
	for (i = 3; i < sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= 1;
		}
	}
	if (num > 2)
	{
		largest_prime = num;
	}
	printf("%lld\n", largest_prime);
}
