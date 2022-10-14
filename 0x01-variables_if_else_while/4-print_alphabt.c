#include <stdio.h>

/**
 * main - containing function
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
