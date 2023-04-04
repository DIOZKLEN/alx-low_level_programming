#include "main.h"

/**
 * _memcpy - copie byte from src to dest
 * @dest: pointer
 * @src: pointer
 * @n: pointer size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;
	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
