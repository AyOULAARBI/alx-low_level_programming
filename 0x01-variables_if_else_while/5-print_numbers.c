#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print numbers
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}

	putchar('\n');
	return (0);
}
