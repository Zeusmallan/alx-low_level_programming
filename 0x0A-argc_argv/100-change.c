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
	int num;
	int m;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	reult = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && num > 0; m++)
	{
		while (num >= coins[m])
		{
