#include "holberton.h"

/**
 * Print_Hexagecimal_UpperCase - Print hexadecimal numbers with uppercase
 *                               letters
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters
 */

int Print_Hexagecimal_UpperCase(va_list Lista)
{
	return (Print_Number_Hexadecimal_UpperCase(va_arg(Lista, unsigned int), 0));
}

/**
 * Print_Hexagecimal_LowerCase - Print hexadecimal numbers with Lowercase
 *                               letters
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters
 */

int Print_Hexagecimal_LowerCase(va_list Lista)
{
	return (Print_Number_Hexadecimal_LowerCase(va_arg(Lista, unsigned int), 0));
}

/**
 * Print_Octal - Function that prints the octal numbers.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters
 */

int Print_Octal(va_list Lista)
{
	return (Print_Number_Octal(va_arg(Lista,unsigned int), 0));
}

/**
 * Print_Unsigned_Integer - Function that prints only positive numbers.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Unsigned_Integer(va_list Lista)
{
	return (print_number_unsigned((long int)va_arg(Lista,unsigned int)));
}

/**
 * Print_STRING - Function that prints me the exercise 7 of holberton.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_STRING(va_list Lista)
{
	return (PrintSTRING(va_arg(Lista, char *)));
}
