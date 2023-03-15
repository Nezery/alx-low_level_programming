#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *alpha;
	int i, lim = 0;

	if (str == NULL)
		return (NULL);

	while (str[lim] != '\0')
		lim++;

	alpha = (char *)malloc((sizeof(char) * lim) + 1);
	if (alpha == NULL)
		return (NULL);

	for (i = 0; i < lim; i++)
		alpha[i] = str[i];
	alpha[lim] = '\0';

	return (alpha);
}
