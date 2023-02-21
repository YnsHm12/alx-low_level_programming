#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int i)
{
	if (( i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (1);
	}

	return (0);
}
