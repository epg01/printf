#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: the string that will be procesed.
 * Return: a char pointer to the encoded string.
 */

int rot13(char *s)
{
	int i;
	int j;
	int counter_Character = 0;

	char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char coded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; base[j] != 0; j++)
			if (s[i] == base[j])
			{
				write (1, &coded[j], 1);
				counter_Character++;
				break;
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
