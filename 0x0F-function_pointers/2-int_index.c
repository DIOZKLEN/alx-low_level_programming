#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of array
 * @cmp: the pointer
 *
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
