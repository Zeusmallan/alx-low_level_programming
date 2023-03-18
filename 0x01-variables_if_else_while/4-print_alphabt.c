#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets, except e and q'
 * Return: Always 0
 */
int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		if (m == 101 || m == 113)
		{
			m++;
			continue;
		}
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
