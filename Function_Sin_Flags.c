#include "holberton.h"

/**
 * Print_String - Function that prints a whole string without the null chara.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters
 */

int Print_String(va_list Lista)
{
	char *String = va_arg(Lista, char *);
	int Counter_Bits = 0;

	if (!String)
	{
		write(1, "(null)", 6);
		Counter_Bits = 6;
	}
	else
		for (; *String; Counter_Bits++)
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

/**
 * Print_Integer -  Function that prints numbers.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Integer(va_list Lista)
{
	return (print_number(va_arg(Lista, int)));
}

/**
 * Print_Number_Binario - Decimal to binary converter.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Number_Binario(va_list Lista)
{
	int Bits;

	Bits = Print_Binario(va_arg(Lista, unsigned int), 0);

	return (Bits - 1);
}
