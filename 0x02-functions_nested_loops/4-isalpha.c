#include "main.h"
/**
 * _isapha - checks for alphabetic character.
 * @c: character to be checked
 * Return: Always 1 if character is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	return (0);
}
