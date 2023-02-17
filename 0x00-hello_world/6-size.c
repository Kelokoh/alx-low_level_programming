#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * returb 0 when successful
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)", (unsigned long)sizeof(f));
	return (0);
}
