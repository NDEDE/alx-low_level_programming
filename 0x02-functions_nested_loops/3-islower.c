/*
 * File: 3-islower.c
 * Author: Dennice Ndede
 */

#include "main.h"

/**
 * _islower -> Checks if the character is lowercase
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
