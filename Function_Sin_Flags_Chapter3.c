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

		write(1, "0x", 2);
		Bits = Print_Number_Hexadecimal_LowerCase((long int)Pointer, 0);
		return (Bits + 2);

	}
	else
	{
		write(1, "(nil)", 5);
		return (5);
	}
}

/**
 * Print_Rot13 - Function that prints rot13.
 * @Lista: Variable that contains the printf arguments.
 * Return: Returns printed characters.
 */

int Print_Rot13(va_list Lista)
{
	char *String_Rot13 = (va_arg(Lista, char *));
	int Counter_Character_impresos;

	if (String_Rot13)
	{
		Counter_Character_impresos = rot13(String_Rot13);
		return (Counter_Character_impresos);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
int Print_String_Reverse(va_list Lista)
{
	char *String = va_arg(Lista, char *);

	if (String)
	{
		int Counter;
		Counter = _print_rev_recursion(String, 0);
		return (Counter);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
