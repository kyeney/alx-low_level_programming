#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of char: %lu byte(s)\n", (unsinged long)sizeof(d));
	printf("size of int: %lu byte(s)\n", (unsinged long)sizeof(a));
	printf("size of long int: %lu byte(s)\n", (unsinged long)sizeof(b));
	printf("size of long long int: %lu byte(s)\n", (unsinged long)sizeof(c));
	printf("size of float: %lu byte(s)\n", (unsinged long)sizeof(f));
	return (0);
}
