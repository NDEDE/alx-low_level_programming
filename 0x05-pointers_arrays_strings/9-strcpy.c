/*
 * File:  9-strcpy.c
 * Auth: Dennice Ndede
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
