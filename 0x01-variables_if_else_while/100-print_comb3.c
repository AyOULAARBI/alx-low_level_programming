#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints combination of 2 nums
 * Return: 0
 */
int main(void)
{
	int  ch,cha;

	for (ch = '0'; ch < '9'; ch ++)
	{
		for (cha = '1'; cha <= '9'; cha ++)
		{
			putchar(48 + ch);
			putchar(48 + cha);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
