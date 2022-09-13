#include "main.h"
/**
 * _islower - check lowercase character
 * @c: the int for the function argument
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
