#include "holberton.h"

/**
 * _printf - Function that works almost the same as printf.
 * @format: Pointer to the first argument passed to the function, which in
 *          this case is a string stored in the heap.
 * Return: Returns the number of characters that was printed.
 */

int _printf(const char *format, ...)
{
	/*
	 * FunctFmtSinFlag - Pointer to a function where flag character
	 *                   handling is not covered, handle field widt, etc.
	 * Number_Of_Character_Impreso - Numbers of characters to be printed,
	 *                               this is returned to the environment
	 *                               I call it
	 */

	int (*FunctFmtSinFlag)(va_list), Number_Of_Character_Impreso = 0;
	va_list Pointer_Argument;

	va_start(Pointer_Argument, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			/*
			 * 1. We verify with the Isspace function: Skip the
			 *    space characters that are between the% and the
			 *    character to be evaluated.
			 * 2. We enter the special character to the function
			 *    get_op
			 */

			FunctFmtSinFlag = get_op((const char **)Isspace((const char **)&(format)));
			format++;

			if (FunctFmtSinFlag)
				Number_Of_Character_Impreso += FunctFmtSinFlag(Pointer_Argument);
			else
				Number_Of_Character_Impreso += Print_Unknown(format - 1);
		}
		else
			write(1, &(*format++), 1), Number_Of_Character_Impreso++;
	}
	va_end(Pointer_Argument);
	return (Number_Of_Character_Impreso);
}
