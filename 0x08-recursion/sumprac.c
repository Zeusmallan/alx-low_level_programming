#include <stdio.h>
#include "sum.c"

int main()
{
	int a;
	int b;
	int result;

	printf("Moses enter two numbers\n");
	scanf("%d %d", &a, &b);
	result = sum_numbers(a, b);
	printf("The sum is: %d\n",result);
	return (0);
}

