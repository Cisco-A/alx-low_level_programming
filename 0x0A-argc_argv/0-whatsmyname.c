#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
