#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - displays the minimum number of coins
 * to make change for an amount of money
 * @argc: Number of arguments recieved.
 * @argv: String of arguements.
 * Return: 0 (Successful) 1 (Error).
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = cents / 25;
	cents = cents % 25;
	coins += cents / 10;
	cents = cents % 10;
	coins = cents / 5;
	cents = cents % 5;
	coins += cents / 2;
	cents = cents % 2;
	coins += cents;
	printf("%d\n", coins);
	return (0);
}

