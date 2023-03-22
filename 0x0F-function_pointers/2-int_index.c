#include "function_pointers.h"


/**
 * int_index - search for an integer
 * @array: array to execute a func on
 * @size:  number of element in the array
 * @cmp: pointer to the function to compare value
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);

			i++;
		}
	}
}
