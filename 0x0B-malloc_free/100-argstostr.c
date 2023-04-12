#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatonates all arguments of a programme.
 * @ac: width of grid.
 * @av: height of grid.
 * Return: Arguments
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int len = 0;
	int m = 0;
	int b = 0;
	int c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (m < ac)
	{
		b = 0;
		while (av[m][b] != '\0')
		{
			len++;
			b++;
		}
		m++;
	}
	len = len + ac + 1;
	string = malloc(sizeof(char) * len);
	if (string == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		for (b = 0; av[m][b] != '\0'; b++)
		{
			string[c] = av[m][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	return (string);
}
