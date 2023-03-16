#include <stdio.h>
/**
 * main - Programme that prints the size of various types on the computer
 * Return: 0 (Pass)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("The size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

