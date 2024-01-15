#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of string
 * @s: string pointer
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
