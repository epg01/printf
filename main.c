#include<stdio.h>
#define CHAR_BITS 8
#include "holberton.h"
#include <limits.h>

int main(void)
{
	void *p = (void *)0x7ffe637541f0;

	int len;

	_printf("mi printf direccion\n");
	len =_printf("%p\n", p);
	_printf("Tamaño de mi printf: %d\n", len);

	_printf("EL del printf Real\n");

	len = printf("%p\n", p);

	_printf("Tamaño del PRINTF: %d\n", len);
	(void)len;

	return (0);
}
