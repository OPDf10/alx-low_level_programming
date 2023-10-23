/**
 * _strcpy - Copies the string from src to dest.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
