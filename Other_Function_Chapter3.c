#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: the string that will be procesed.
 * Return: a char pointer to the encoded string.
 */

char *rot13(char *s)
{
	int i;
	int j;

	char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char coded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
			for (j = 0; base[j] != 0; j++)
				if (s[i] == base[j])
				{
					s[i] = coded[j];
					break;
				}
		return (s);
	}
	else
		return (NULL);
}

/**
 * String_Print - Function that prints a string to me
 * @String: String to print.
 * Return: Returns the length of the string.
 */

int String_Print(char *String)
{
	int Counter_Bits = 0;

	if (!String)
	{
		write(1, "(null)", 6);
		Counter_Bits = 6;
	}
	else
		for (; *String; Counter_Bits++)
			write(1, &(*String++), 1);
	return (Counter_Bits);
}
