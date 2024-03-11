#include "main.h"

/*
 * Returns 1 if c is a digit 
 * Returns 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		putchar('1');
		return 1;
	}
	{
	else putchar('0');
	return 0;
	}
}
