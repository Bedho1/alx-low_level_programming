#include "main.h"
/**
 * print_numbers - print num from 0-9
 * return: void
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
