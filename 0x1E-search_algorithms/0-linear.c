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
        size_t i;

        for (i = 0; i < size; i++)
        {
                if(array[i] == value)
                        return(i);
        }

        return (-1);
        }
