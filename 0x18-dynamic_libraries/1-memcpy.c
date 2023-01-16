#include "main.h"
<<<<<<< HEAD
/**
 * _memcpy - copy memory
 * @dest: pointer params
 * @src: pointer params
 * @n: unsigned int param
 * Return: pointer
=======

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
>>>>>>> 51cca86672baae46f4496591dbd419a3b5f4a2b1
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
=======
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

>>>>>>> 51cca86672baae46f4496591dbd419a3b5f4a2b1
	return (dest);
}
