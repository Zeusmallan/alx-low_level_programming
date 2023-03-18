#include <stdio.h>
/**
 * main - Entry point
 * Description:Prints alphabets in lower case and then in upper case.
 * Return: 0
 */
int main(void)
{
	int u = 97;
	int l = 65;

	while (u <= 122)
	{
	putchar(u);
	u++;
	}
	while (l <= 90)
	{
	putchar(l);
	l++;
	}
	putchar('\n');
	return (0);
}
