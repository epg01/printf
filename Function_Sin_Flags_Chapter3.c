#include "holberton.h"

/**
 * Print_Address - Function that prints an address in hexadecimal.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Address(va_list Lista)
{
	void *Pointer = va_arg(Lista, void *);

	if (Pointer)
	{
		int Bits;

		write(1, "0", 1);
		write(1, "x", 1);
		Bits = Print_Number_Hexadecimal_LowerCase((long int)Pointer, 0);
		return (Bits);

	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
