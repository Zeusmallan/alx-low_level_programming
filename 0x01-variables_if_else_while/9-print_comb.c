#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print numbers with comas and spaces'
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar_('\n');
	return (0);
}

