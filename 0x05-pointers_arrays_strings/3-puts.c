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
	for (; *str != '\0'; str++)
	{
		_putchar(*(str));
	}
	_putchar('\n');
}
