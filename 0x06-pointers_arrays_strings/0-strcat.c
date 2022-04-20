#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = -1;

	while (dest[i] != '\0')
	{
		i++;
	}

	do
	{
		j++;
		dest[i] = src[j];
		i++;
	} while (src[j] != '\0');

	return (dest);
}
