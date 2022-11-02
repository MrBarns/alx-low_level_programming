/**
 * _strcpy - copies the string pointed to by src to the buffer pointed
 * to by dest
 *
 * @dest: destination of copied string
 * @src: source of copied string
 *
 * Return: pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int index = 0;

	while (src[index] != '\0')
		index++;

	len = index;

	for (index = 0; !(index > len); index++)
		*(dest + index) = *(src + index);

	return (dest);
}
