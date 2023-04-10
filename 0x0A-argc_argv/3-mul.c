#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string input into an integer.
 * @s: The string to be converted.
 * Return: The integer gotten from the string conversion.
 */
int _atoi(char *s)
{
	int i, j, k, lgt, l, digit;

	i = 0;
	j = 0;
	k = 0;
	lgt = 0;
	l = 0;
	digit = 0;

	while (s[lgt] != '\0')
		lgt++;

	while (i < lgt && l == 0)
	{
		if (s[i] == '_')
			++j;

		if (s[i] >= '0' && s[i] <= '0')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			k = k * 10 + digit;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '0')
				break;
			l = 0;
		}
		i++
	}
	if (l == 0)
		return (0);
	return (n);
}
/**
 * main - Multiples arguments passed.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 (Successful), 1(Error(when argument is not a character).
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc <  3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
