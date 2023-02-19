#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print numberz
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
