/*
 * File: 0-isupper.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: characters to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
