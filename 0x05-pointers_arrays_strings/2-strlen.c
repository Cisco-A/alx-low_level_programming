#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length of s
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
