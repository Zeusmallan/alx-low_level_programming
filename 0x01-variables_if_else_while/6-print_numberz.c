#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all base 10 digits using putchar'
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + 48);
	}
	putchar('\n');
	return (0);
}
