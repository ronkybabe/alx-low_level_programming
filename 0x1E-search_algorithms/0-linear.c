#include "search_algos.h"
/**
 * linear_search - search linear form in array for element
 * @array: array list
 * @size: size of the array
 * @value: value of the array
 *
 * Return: index where user looks for
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
