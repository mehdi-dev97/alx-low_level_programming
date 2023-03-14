#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string in memory 
 * @str: address of string
 * Return: pointer of duplication or Null if fails
 */
char *_strdup(char *str)
{
	int i, len = 1;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str[i]; i++)
	{
		len++;
	}
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str[i]; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
