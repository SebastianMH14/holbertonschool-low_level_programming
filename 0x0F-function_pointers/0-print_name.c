#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name -  function that prints a name
 *@name: nombre
 *@f: funcion
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
