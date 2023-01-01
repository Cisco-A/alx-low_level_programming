#include <stdio.h>

/**
 * main - Prints the alphabet in lower case and uppercase
 * Return: Always 0.
*/

int main(void)
{
	char lalph[26] = "abcdefghijklmnopqrstuvwxyz";

	char ualph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i = 0;

	int j = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(lalph[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(ualph[j]);
	}
	putchar('\n');
	return (0);
}
