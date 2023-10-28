#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: String to be examined.
 * @needle: Substring to be located.
 *
 * Return: Pointer to the beginning of located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *pattern = needle;

while (*pattern && *start == *pattern)
{
start++;
pattern++;
}
if (!*pattern)
return (haystack);
haystack++;
}
return (NULL);
}
