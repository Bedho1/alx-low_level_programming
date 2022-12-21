#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to printed
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
