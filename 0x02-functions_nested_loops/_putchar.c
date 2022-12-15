#include "main.h"
#include <unistd.h>
/**
 * putchar - writes character c in stdout
 * c: the character to print
 * Return: on success 1.
 * on error -1 is returned, errno is set appropiraitly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
