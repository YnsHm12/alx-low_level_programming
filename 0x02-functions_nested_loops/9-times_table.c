#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */

void times_table(void)
{
	int i, j;
	int mult = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = (i * j);
			if (mult < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
