#include <stdio.h>

/**
 * main - Prints the alphabet in lower case 
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
	putchar('\n');
	return (0);
}
