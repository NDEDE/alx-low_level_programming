/*
 * File: 6-abs.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * _abs - Returns absolute value of function argument
 * @n: Convert this to absolute value
 * Return: (0): success
 */
int _abs(int n)
{
	return (n < 0 ? (n* -1) : (n));
}
