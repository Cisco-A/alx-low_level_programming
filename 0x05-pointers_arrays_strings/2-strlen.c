#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: length of s
 */

int _strlen(char *s)
{
	len = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
