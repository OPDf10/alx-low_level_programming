#include "main.h"

/**
 * _strcat - Merges two strings.
 * @dest: Destination string.
 * @src: Source string to append.
 *
 * Return: Pointer to the combined string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_index = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
