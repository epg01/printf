#include "holberton.h"

/**
 * print_number - prints an integer char by char
 * @Number: The integer to print
 */

int print_number(int Number)
{
	int  SolveCharacter;
	signed int PowerOf10;
	unsigned char State, State0, Length = 0;

	State = PowerOf10 =  State0 = 1, SolveCharacter = 0;

	while (PowerOf10)
	{
		if ((Number < 0) && State0)
			SolveCharacter = '-', State0 = 0;
		else if (((Number / PowerOf10) >= POWER_OF_10 ||
			  (Number / PowerOf10 <= -10)) && (State))
		{
			PowerOf10 *= POWER_OF_10;
			continue;
		}
		else if (State)
		{
			State = 0;
			continue;
		}
		else if (POWER_OF_10)
		{
			if (Number >= 0)
				SolveCharacter = (Number / PowerOf10) % POWER_OF_10 + '0';
			else
			{
				SolveCharacter = Number / PowerOf10 % 10;
				SolveCharacter *= (-1);
				SolveCharacter += '0';
			}
			PowerOf10 /= POWER_OF_10;
		}
		if (SolveCharacter)
		{
			write(1, &(SolveCharacter), 1);
			if (SolveCharacter != '-')
				Length++;
		}
	}
	return (Length);
}

/**
 * Isspace - Function that ignores space characters
 * @String: Contains the address of format -> format is related to the
 *          format variable of the _printf function.
 * Return: Returns the format address.
 */

const char **
Isspace(const char **String)
{
	(*String)++;

	while ((**String))
	{
		if ((**String) == ' ' || (**String) == '\t')
			(*String)++;
		else
			return (&*(String));
	}
	return (&*(String));
}

/**
 * Print_Unknown - Function that prints a character that is not special.
 * @String: Points to the format arguments.
 * Return: Returns printed characters.
 */
int Print_Unknown(const char *String)
{
	write(1, "%", 1);
	write(1, &(*String), 1);

	return (2);
}
