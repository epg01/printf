#ifndef Holberton
#define Holberton

/*
 * 1. The first macro used by the get_op function.
 * 2. the second used in the function of printing a number of type int
 *    and unsigned int.
 */

#define NULL ((void *)0)
#define POWER_OF_10    10

/*
 * Libraries to be able to call the write function, to be able to use the
 * data input and output functions and use the va_list, va_arg,
 * va_start_ va_end macros.
 */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct formato_ - Structure that will contain the get_op function.
 * @formato: Contains special characters.
 * @Pointer_Function: Pointer function, these functions print what each of the
 *                    special characters means.
 *
 * Description: Structure that will contain the get_op function.
 */

typedef struct formato_
{
	const char *formato;
	int (*Pointer_Function)(va_list);
} Formato;

/*
 * Functions used for each of the special character specifiers.
 */

int Print_String(va_list Lista);
int Print_Character(va_list Lista);
int Print_Integer(va_list Lista);
int Print_Porcentaje(va_list Lista);
int Print_Hexagecimal_LowerCase(va_list Lista);
int Print_Hexagecimal_UpperCase(va_list Lista);
int Print_Unsigned_Integer(va_list Lista);
int Print_Octal(va_list Lista);
int Print_Number_Binario(va_list Lista);
int Print_STRING(va_list Lista);
int Print_Address(va_list Lista);


int (*get_op(const char **Character))(va_list Lista);

/*
 * Functions used for the process of printing hexadecimal,
 * octal numbers, printing unsigned numbers int, int, etc.
 */

const char **Isspace(const char **String);
int print_number(int Number);
void print_number_unsigned(long int Number);
int Print_Binario(long int Number, int Legth_Of_Characer_impresos);
int Print_Number_Octal(long int Number, int Legth_Of_Characer_impresos);
int Print_Number_Hexadecimal_LowerCase(long int Number, int LegthCharacerimpr);
int Print_Number_Hexadecimal_UpperCase(long int Number, int LegthCharacerimpr);
int PrintSTRING(char *String);
int Print_Unknown(const char *String);

/*
 * Printf function prototype.
 */

int _printf(const char *format, ...);

#endif
