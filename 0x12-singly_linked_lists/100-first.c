#include <stdio.h>

void before_main(void)__attribute__((constructor));

/**
 * before_main - function that runs before main
 */
void before_main(void)
{
	printf("you are beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
