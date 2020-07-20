#include "holberton.h"

/**
 * Isspace - Function that ignores space characters.
 * @String: Contains the address of format -> format is related to the
 *          format variable of the _printf function.
 * Return: Returns the format address.
 */

const char **
Isspace(const char **String)
{
	(*String)++;

	while ((**String))
	{
		if ((**String) == ' ' || (**String) == '\t')
			(*String)++;
		else
			return (&*(String));
	}
	return (&*(String));
}

/**
 * Print_Unknown - Function that prints a character that is not special.
 * @String: Points to the format arguments.
 * Return: Returns printed characters.
 */
int Print_Unknown(const char *String)
{
	write(1, "%", 1);
	write(1, &(*String), 1);

	return (2);
}
