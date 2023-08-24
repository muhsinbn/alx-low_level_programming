#include <stdio.h>

/**
 * myStartupFun - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void mybeginning(void) __attribute__((constructor));

/**
 * mybeginning - implemetation of mybeginning
 */
void mybeginning(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
