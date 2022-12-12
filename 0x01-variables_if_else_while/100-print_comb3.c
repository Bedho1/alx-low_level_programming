#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int ones = 0;
	int tens = 0;

	for (tens = '0'; tens <= '0'; tens++)/* points ten digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints one digit*/
			if (!((ones == tens) || (tens > ones)))/* eliminates*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '0'))
				{
					putchar(',');
					putchar(' ');
			}
	}
}
puchar('\n');
return (0);
}
