#include <stdio.h>

#include "main.h"

/**
 * main - main func
 * @argc: param count
 * @argv: param pointer
 * Return: int
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

>>>>>>> a9f93409c98a7ce3f28d761b2ac9a63d5cb3d3c7
	return (0);
}
