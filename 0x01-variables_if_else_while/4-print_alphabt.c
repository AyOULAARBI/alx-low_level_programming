#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet
 * except e and q
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ( c == 'q' || c == 'e' )
		{
			continue;
		}
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
