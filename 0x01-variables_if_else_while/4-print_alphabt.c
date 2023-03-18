#include <stdio.h>
/**
 * main - Entry point.
 * Description: 'Print alphabets, except e and q'
 * Return: 0 (Success)
 */
int main(void)

{
	int m = 97;

	while (m <= 97)
	{
		if (m == 101 || m == 113)
	{	m++;
		continue;
	}
	putchar(m);
		n++;
	putchar('\n');
	return (0);
}
