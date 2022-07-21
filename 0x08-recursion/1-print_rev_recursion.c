/*
 * File: 1-print_rev_recursion.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, followed by a newline.
 * @s: the string to be printed
 */
void _prints_rev_recusion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
