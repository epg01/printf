#include<stdio.h>
#define CHAR_BITS 8
#include "holberton.h"
#include <limits.h>

int main(void)
{
	int len;

	len = _printf("%S\n", "HolbertonëSchool");

	_printf("%d", len);

	return (0);
}
