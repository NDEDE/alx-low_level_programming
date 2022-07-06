/*
 * File: 1-alphabet.c
 * Auth: Dennice Ndede
 */

#include "holberton.h"

/**
 * print_alphabet - Check the code for alx student
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
