#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
