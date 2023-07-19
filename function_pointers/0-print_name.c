#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name: print a name
 *@name: char
 *@f: pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
