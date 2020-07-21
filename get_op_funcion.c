#include "holberton.h"

/**
 * get_op - Function that returns a pointer to a function stored in the
 *          structure and enters the character to evaluate -> this is evaluated
 *          with respect to the content of the first member of said structure.
 * @Character: Double pointer that points to the address of format -> format is
 *            the pointer that points to the string stored in the heap, that
 *            is, the first puncture passed to the _printf function.
 * Return: Returns a function saved in the second member of the structure or
 *         null if it cannot find the match of the second member.
 */

int (*get_op(const char **Character))(va_list Lista)
{
	Formato formato[] = {
		{"c",  Print_Character},
		{"s",  Print_String},
		{"%",  Print_Porcentaje},
		{"id", Print_Integer},
		{"b",  Print_Number_Binario},
		{"X",  Print_Hexagecimal_UpperCase},
		{"x",  Print_Hexagecimal_LowerCase},
		{"u",  Print_Unsigned_Integer},
		{"o",  Print_Octal},
		{"S",  Print_STRING},
		{'\0', NULL}
	};

	int index = 0;

	if (**Character == '%' && (*Character)[-1] != '%')
		(*Character)++;

	while ((formato[index].formato))
	{
		if (*(formato[index].formato) == *(*Character))
			return (formato[index].Pointer_Function);
		else if (*(formato[index].formato))
			(formato[index].formato)++;
		else
			index++;
	}
	return (NULL);
}
