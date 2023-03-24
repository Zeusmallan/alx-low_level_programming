#include <stdio.h>

/**
 * main - Print Fizz Buzz
 * Return: 0 (Success).
 */
int main(void)
{
	int begin = 1;
	int end = 100;

	while (begin <= 100)
	{
		if (beging % 3 == 0)
			prinf("Fizz");
		if (begin % 5 == 0)
			printf("Buzz");
		if (being % 3 != 0 && begin % 5 != 0)
			printf("%d", begin);
		putchar(begin == end ? '\n' : ' ');
		begin++;
	}
}
