#include <stdio.h>
#include "sum.c"
/**
 * main - main function.
 * @a: Firtst number.
 * @b: Second number.
 * Return: Sum of number.
 */
int main ()
{
	int a;
	int b;
	int answer;

	printf("Moses enter two numbers you want to add\n");
	scanf("%d && %d", &a, &b);
	answer = sum_numbers(a, b);

	printf("The sum of %d and %d is %d\n", a, b, answer);
	return (0);
}
