#include <stdio.h>

#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\nSize of an int: %ld byte(s)\nSize of a long int: %ld byte(s)\nSize of a long long int: %ld byte(s)\nSize of a float: %ld byte(s)\n", sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float));

return (0);
}
