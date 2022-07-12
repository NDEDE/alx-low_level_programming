/*
 * File: 3-islower.c
 * Author: Dennice Ndede
 */

#include "main.h"

/**
 * _islower -> Checks if the character is lowercase
 * @c: a character arguments
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int C)
{
	return (C >= 'a' && C <= 'z');
}
