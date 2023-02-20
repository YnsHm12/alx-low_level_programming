#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;
	char j = '48';

	while (j <= '58')
	{
		putchar(j);
		j++;
	}
	for (i = 97; i <= 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
