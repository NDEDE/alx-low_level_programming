/*
 * File: 0-putchar.c
 * Auth: Dennice Ndede
 *
 */

#include "stdio.h"
#include "main.h"

/**
 * main -Prints "-putchar" followed by a new linee.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
{
	putchar (i);
}
	putchar('\n');
}
