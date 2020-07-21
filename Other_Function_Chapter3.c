#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: the string that will be procesed.
 * Return: a char pointer to the encoded string.
 */

int rot13(char *String)
{
	int i;
	int j;
	char String1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char String2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int counter_Character = 0;

	for (i = 0; String[i] != '\0'; i++)
	{
		for (j = 0; String1[j] != '\0'; j++)
		{
			if (String[i] == String1[j])
			{
				write(1, &String2[j], 1), counter_Character++;
				break;
			}
		}
		if (!String1[j])
			write(1, &String[i], 1), counter_Character++;
	}
	return (counter_Character);
}

/**
 * String_Print - Function that prints a string to me
 * @String: String to print.
 * Return: Returns the length of the string.
 */

int String_Print(char *String)
{
	int Counter_Bits = 0;

	for (; *String; Counter_Bits++)
		write(1, &(*String++), 1);
	return (Counter_Bits);
}

int _print_rev_recursion(char *String, int Counter_Character)
{
	if (!(*String))
	{
		return (Counter_Character);
	}
	else
		Counter_Character = _print_rev_recursion((String + 1), ++Counter_Character);
	write(1, &(*String), 1);

	return (Counter_Character);
}

int Print_Hexadecimal_UpperCase(int Number, int Legth)
{
	if ((Number / 16) == 1)
	{
		int Number1 = Number / 16;

		if (Number1 < 10)
		{
			Number1 += '0';
			write(1, "0", 1);
			write(1,&Number1,1);
		}
		else if (Number == 10)
		{
			write(1, "0", 1);
			Number += ('A' - 10);
			write(1, &Number, 1);
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
			write(1,&Number1, 1);
		}
		return (Legth + 2);
	}
	if ((Number / 16) == 0)
	{
		if (Number < 10)
		{
                        write(1, "0", 1);
			Number += '0';
			write(1,&Number,1);
		}
		else if (Number == 10)
		{
			write(1, "0", 1);
			Number += ('A' - 10);
			write(1, &Number, 1);
		}
		else
		{
			Number += ('A' - 10);
			write(1, &Number,1);
		}
		return (Legth + 1);
	}
	else
		Legth = Print_Hexadecimal_UpperCase(Number / 16, ++Legth);
	Number = Number % 16;
	if (Number < 10)
	{
		write(1, "0", 1);
		Number += '0';
		write(1,&Number,1);
	}
	else if (Number == 10)
	{
		write(1, "0", 1);
		Number += ('A' - 10);
		write(1, &Number, 1);
	}
	else
	{
		Number += ('A' - 10);
		write(1, &Number,1);
	}
	return (Legth);
}
