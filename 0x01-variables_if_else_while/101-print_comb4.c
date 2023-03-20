#include <stdio.h>
/**
 * main - 'Entry point'
 * Description: Programme that prints two digits combinations
 * Return: Always 0
 */
int main(void)
{
	int m;
	int j;

	for (m = 0; m <= 9; m++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (m < j)
			{
				putchar(m);
				putchar(j);

				if (m != 8 || (m == 8 && j != 9))
				{
					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

