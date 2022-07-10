/*
 * File: 1-alphabet.c
 * Auth: Dennice Ndede
 */

#include "main.h"

/**
 * print_alphabet - prints the lowercase alphbets
 */
void print_alphabet(void)
{
    int j;
        
    for (j = 'a'; j <= 'z'; j++)
    {
	_putchar(j);
    }
    _putchar('\n');
}
