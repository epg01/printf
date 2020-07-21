#include<stdio.h>
#define CHAR_BITS 8
#include "holberton.h"
#include <limits.h>

int main(void)
{
	int len;

	len = _printf("%r\n", "hola bebe");
	_printf("%d", len);
	return (0);
}
