/*
 * File: 0-strcat.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * _strcat -appendes src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
