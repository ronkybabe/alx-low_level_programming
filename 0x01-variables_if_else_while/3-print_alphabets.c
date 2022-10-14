#include <stdio.h>

/**
 * main - print alphabet upper and lower case
 * Return: 0 when successful
 */

int main(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
