#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
*/

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		if (alph[i] != 'q' && alph[i] != 'e')
			putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
