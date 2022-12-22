#include "main.h"

/**
 * null byte, to the end of the string pointed to by @dest.




{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
