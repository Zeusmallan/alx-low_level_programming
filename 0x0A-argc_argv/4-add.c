#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * observe_num - check the string for digits.
 * @s: String to be checked.
 * Return: 0 (Succes).
 */
int observe_num(char *s)
{
	unsigned int count;

	count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - Prints the name of the file of the programme.
 * @argc: Number of arguements.
 * @argv: String of arguements.
 * Return: 0 (Successful).
 */
int main(int argc, char *argv[])
{
	int count;
	int s_changed_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (observe_num(argv[count]))
		{
			s_changed_to_int = atoi(argv[count]);
			sum += s_changed_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
