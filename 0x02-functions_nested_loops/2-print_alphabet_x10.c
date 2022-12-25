#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * Return: success
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_puchar(la);
		_putchar('\n');
	}
}
