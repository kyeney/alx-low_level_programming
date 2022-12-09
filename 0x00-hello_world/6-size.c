#include <stdio.h>

/**
 * main - prints the size of various types,
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	Printf("size of a char:  %i byte(s)\n",   sizeof(char));
	Printf("size of an int:  %i byte(s)\n",   sizeof(int));
	Printf("size of a long int:  %i byte(s)\n",   sizeof(long int));
	Printf("size of a long long int:  %i byte(s)\n",   sizeof(long long int));
	Printf("size of a float :  %i byte(s)\n",   sizeof(float));
}
