#include<stdio.h>
#define CHAR_BITS 8
#include "holberton.h"
#include <limits.h>

int print_binint(int num)
{
	int Counter = 0;
	int sup = CHAR_BITS*sizeof(int);
	while(sup >= 0)
	{
		if(num & (((long int)1) << sup))
			printf("1");
		else
			printf("0");
		Counter++;
		sup--;
	}
	printf("\n");
	return (Counter);
}

int main(void)
{
	int len;
	int len2;

	len  = print_binint((unsigned int)INT_MAX + 1024);
	len2 = _printf("%b\n", (unsigned int)INT_MAX + 1024);

	printf("%d\n", len);
	printf("%d\n", len2);

	return (0);
}
