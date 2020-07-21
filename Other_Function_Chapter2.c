#include "holberton.h"

/**
 * Print_Number_Octal - Function that converts and prints decimal numbers
 *                      to octales.
 * @Number: Decimal number to be converted to octal.
 * @Legth: Number of printed numbers.
 */

int Print_Number_Octal(long int Number, int Legth)
{
        if ((Number / 8) == 1)
	{
		int Number1 = Number / 8 + '0';

		write(1,&Number1,1);

		Number = Number % 8 + '0';
		write(1, &Number, 1);
		return (Legth + 2);
	}
	if ((Number / 8) == 0)
	{
		Number = Number % 8 + '0';
		write(1, &Number, 1);
                return (Legth + 1);
	}
	else
		Legth = Print_Number_Octal(Number / 8, ++Legth);
	Number = Number % 8 + '0';

	write(1, &Number,1);
	return (Legth);
}

int Print_Number_Hexadecimal_LowerCase(long int Number, int Legth)
{
	if ((Number / 16) == 1)
	{
		int Number1 = Number / 16;

		if (Number1 < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('A' - 10);
			write(1,&Number1,1);
		}
		Number = Number % 16;
		if (Number < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('a' - 10);
			write(1,&Number1, 1);
		}
		return (Legth + 2);
	}
	if ((Number / 16) == 0)
	{
		if (Number < 10)
		{
			Number += '0';
			write(1,&Number,1);
		}
		else
		{
			Number += ('a' - 10);
			write(1,&Number,1);
		}
		return (Legth + 1);
	}
	else
		Legth = Print_Number_Hexadecimal_LowerCase(Number / 16, ++Legth);
	Number = Number % 16;
	if (Number < 10)
	{
		Number += '0';
		write(1,&Number,1);
	}
	else
	{
		Number += ('a' - 10);
		write(1,&Number,1);
	}
	return (Legth);

}

int Print_Number_Hexadecimal_UpperCase(long int Number, int Legth)
{
	if ((Number / 16) == 1)
	{
		int Number1 = Number / 16;

		if (Number1 < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('A' - 10);
			write(1,&Number1,1);
		}
		Number = Number % 16;
		if (Number < 10)
		{
			Number1 += '0';
			write(1,&Number1,1);
		}
		else
		{
			Number1 += ('A' - 10);
			write(1,&Number1,1);
		}
		return (Legth + 2);
	}
	if ((Number / 16) == 0)
	{
		if (Number < 10)
		{
			Number += '0';
			write(1,&Number,1);
		}
		else
		{
			Number += ('A' - 10);
			write(1,&Number,1);
		}
		return (Legth + 1);
	}
	else
		Legth = Print_Number_Hexadecimal_UpperCase(Number / 16, ++Legth);

	Number = Number % 16;

	if (Number < 10)
	{
		Number += '0';
		write(1,&Number,1);
	}
	else
	{
		Number += ('A' - 10);
		write(1,&Number,1);
	}
	return (Legth);
}

int print_number_unsigned(long int Number)
{
	int  SolveCharacter;
	long int PowerOf10;
	unsigned char State, State0, Length = 0;

	State = PowerOf10 =  State0 = 1, SolveCharacter = 0;

	while (PowerOf10)
	{
		if (((Number / PowerOf10) >= POWER_OF_10) && (State))
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
			PowerOf10 /= POWER_OF_10;
		}
		if (SolveCharacter)
			write(1, &(SolveCharacter), 1), Length++;
	}
	return (Length);
}

/**
 * PrintSTRING - Function that prints me the exercise 7 of holberton.
 * @String: Pointer To String.
 * Return: Number of characters print.
 */

int PrintSTRING(char *String)
{
	int Counter = 0;

	while(String && *String)
	{
		if ((*String < 32 || *String >= 127))
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			write(1, "0", 1);
			Print_Number_Hexadecimal_UpperCase((int)*String, 0);
			String++;
			Counter += 4;
		}
		write(1, &(*String++), 1);
		Counter++;
	}
	return (Counter);
}
