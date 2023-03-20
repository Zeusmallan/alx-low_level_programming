#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'Print digits combinations'
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != b && b != c && c < d && b < a)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
