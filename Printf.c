#include "holberton.h"

/**
 * llenarBuffer - Function that fills the buffer.
 * @format: Pointer to the first argument passed to the function, which in
 *          this case is a string stored in the heap.
 * @Buff: Pointer that fills the buffer.
 */

void llenarBuffer(char **Buff, const char **format)
{
	static int Counter;

	while ((**format) && ((**format) != '%') && Counter < 1)
	{
		*(*Buff)++ = *(*format)++;
		Counter++;
	}

	if (Counter == 1)
		Counter = 0;
}


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
	int Solve_Number = 0;
	va_list Pointer_Argument;

	char Buffer[1];
	char *P_Next = Buffer;
	char *P_Next_Free = Buffer;

	va_start(Pointer_Argument, format);
	while (format && *format)
	{
		if (Number_Of_Character_Impreso >= 1)
		{
			P_Next = P_Next_Free = Buffer;
			Solve_Number +=  Number_Of_Character_Impreso;
			Number_Of_Character_Impreso = 0;
		}
		if (P_Next < Buffer + 1)
		{
			llenarBuffer(&P_Next_Free, &format);

			write (1, &*(P_Next), P_Next_Free  - P_Next);
			Number_Of_Character_Impreso += P_Next_Free  - P_Next;
			P_Next = P_Next_Free;
		}
		if (*format == '%')
		{
			FunctFmtSinFlag = get_op((const char **)Isspace((const char **)&(format)));

			if (*format)
				format++;
			else
				return (-1);
			if (FunctFmtSinFlag)
				Number_Of_Character_Impreso += FunctFmtSinFlag(Pointer_Argument);
			else
				Number_Of_Character_Impreso += Print_Unknown(format - 1);
		}
	}
	va_end(Pointer_Argument);
	if (!format)
		return (-1);
	if (Solve_Number)
		Number_Of_Character_Impreso = Solve_Number + 1;
	return (Number_Of_Character_Impreso);
}
