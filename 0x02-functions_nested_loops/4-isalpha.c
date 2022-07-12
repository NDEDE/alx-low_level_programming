/*
 * File: 4-isalpha.c
 * Author: Dennice Ndede
 */                  
                     
#include "main.h"
                                                                          
/**
 * _isalpha - checks for alphabetical letters.
 *@C: a character to be checked on. 
 * Return:returns 0 or 1 depending on the condition.
 */                    
int _isalpha(int c)
{
           return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


