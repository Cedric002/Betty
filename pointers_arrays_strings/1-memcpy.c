#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _memcpy - copie n octets
 * @dest: zone memoire 1
 * @src: zone memoire 2
 * @n: 1ers octets
 *
 * Return: reverse array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (int i = 0; i < n; i++)
		cdest[i] = csrc[i];
}
