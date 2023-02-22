#include "main.h"

/**
 *  _islower - to Write a function that checks for lowercase character
 *
 *  @c: character to compare.
 *
 *  Return: 1 if c is a letter, lowercase or uppercase,
 *  otherwise return 0
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
