#include "main.h"
/**
 * _islower - checks if char is lower or no
 * @c: param
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
