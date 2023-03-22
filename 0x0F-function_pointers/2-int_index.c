#include "function_pointers.h"


/**
 * int_index - search for an integer
 * @array: array to execute a func on
 * @size:  number of element in the array
 * @cmp: points to a function used to compare value.
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)

			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
