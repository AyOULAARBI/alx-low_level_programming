#include "main.h"
/**
 * _abs - get the last digit
 * @n: param
 *  Return: the last digit
 */
int print_last_digit(int n)
{
	int nn;

	if (n < 0)
		n = -n;
	nn = n % 10;
	if (nn < 0)
		nn = -nn;
	_putchar(nn + '0');
	return (nn);
}
