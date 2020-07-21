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
