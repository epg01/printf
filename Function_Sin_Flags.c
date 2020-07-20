#include "holberton.h"

/**
 * Print_NULL - Function that prints me null
 * @String: Pointer to string (null).
 * Return: Number 6.
 */

int Print_Null(char *String)
{
	while (*String)
		write(1, &(*String++), 1);
	return (6);
}

/**
 * Print_String - Function that prints a whole string without the null chara.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters
 */

int Print_String(va_list Lista)
{
	char *String = va_arg(Lista, char *);
	int Counter_Bits;

	if (!String)
		return (Print_Null("(null)"));

	for (Counter_Bits = 0; *String; Counter_Bits++)
		write(1, &(*String++), 1);
	return (Counter_Bits);
}

/**
 * Print_Character -  Function that prints a Character.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Character(va_list Lista)
{
	int Solve_Character = (char)va_arg(Lista, int);

	write(1, &Solve_Character, 1);
	return (1);
}

/**
 * Print_Porcentaje -  Function that prints el character "%"
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Porcentaje(va_list Lista)
{
	(void)Lista;

	write(1, "%", 1);
	return (1);
}
