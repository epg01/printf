#include "holberton.h"

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
	char Solve_Character = (char)va_arg(Lista, int);

	if (!Solve_Character)
	{
		write(1, &Solve_Character, 1);
		return (0);
	}
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
