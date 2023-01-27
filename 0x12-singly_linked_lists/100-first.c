#include <stdio.h>
/**
 * myStartupFun - Apply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 * Return: no return
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You 're beat! and yet, you must allow,\n");
	printf(",\nI bore my house upon my back!\n");
}
