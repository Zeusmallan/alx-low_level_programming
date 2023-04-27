#include <stdio.h>
void first_sent(void)__attribute__((constructor));
/**
 * first_sent - Prints a sentence before  control executes
 * the main function.
 */
void first_sent(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
