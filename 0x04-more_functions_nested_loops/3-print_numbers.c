/*
 * File: 3-print_numbers.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by new line.
 */
void print_numbers(void)
{
	int i

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}