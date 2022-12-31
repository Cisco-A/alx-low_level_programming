#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0.
*/

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar("\n");
	return (0);
}
