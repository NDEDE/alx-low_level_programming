/*
 * File: 3-puts.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_puts(*(str + i));
		i++;
	}
	_puts('\n');
}
