#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contentsnof  s1, followed by contents of s,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, lim1, lim2, lim;
	char *result;

	lim1 = lim2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			lim1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			lim2++;
	}

	lim = lim1 + lim2;
		result = (char *)malloc(sizeof(char) * (lim + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < lim1;  i++)
		result[i] = s1[i];
	for (j = 0; j < lim2; j++, i++)
		result[i] = s2[j];
	result[lim] = '\0';

	return (result);
}
