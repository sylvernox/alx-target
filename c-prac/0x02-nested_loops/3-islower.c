#include <stdio.h>
#include <ctype.h>
#include "main.h"

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}

	
