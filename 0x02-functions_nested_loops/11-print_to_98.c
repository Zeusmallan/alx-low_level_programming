#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Prints all natural numbers from n to 98
*@n: The number the to commence printing from
*Return: Always 0.
*/
void print_to_98(int n)
{
	if (n >= 99)
	{
		while (n < 98)
		
			printf("%d, ", n--);
			printf("\n");
		}
		else
		{
			while (n < 98)
			
				printf("%d, ", n++);
				printf("\n");
		}
}
