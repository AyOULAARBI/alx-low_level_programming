#include "main.h"
/**
 * _isalpha - checks if is alpha or not
 * @c:  param
 *  Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
