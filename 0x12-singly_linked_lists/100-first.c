#include <stdio.h>
/**
 * myStartupFun - Apply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You 're beat! and yet, you must allow,\n");
	printf(",\nI bore my house upon my back!\n");
}
