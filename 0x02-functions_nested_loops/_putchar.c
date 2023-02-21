#include "main.h"
#include <unistd.h>
/**
 * _putchar : writes the char passed in params
 *  to stdoutput
 *  @c : the char to be printed
 *  Return : 1 
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
