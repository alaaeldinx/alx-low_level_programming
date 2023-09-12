#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if the letter
 * is alpha
 * @c: letter
 *
 * Description: checks for
 * alphabetic character
 *
 * Return: 1 if c is letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
