#include <stdio.h>
/**
 * main - 'Entry point'
 * Description: Programme that prints two digits combinations
 * Return: Always 0
 */
int main(void)
{
        int m = 0;
        int j = 0;

	while (j < 10)
	{
		m = 0;
		while (m < 10)
		{
			if (j != m && j < m)
			{
				putchar('0' + j);
				putchar('0' + m);

				if (m + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
