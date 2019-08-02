#include <stdio.h>
void beforeMain(void) __attribute__ ((constructor));
/**
*beforeMain - Executes before the main
*Return: Nothing
*/

void beforeMain(void)
{
	char *strings = "You're beat! and yet, you must allow,\n";

	printf("%sI bore my house upon my back!\n");
}
