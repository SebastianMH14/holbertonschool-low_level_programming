#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - sum a y b
 *@a: first value
 *@b: second value
 *Return: result
 */
int op_add(int a, int b)
{
	int suma;

	suma = a + b;
	return (suma);
}

/**
 *op_sub - res a y b
 *@a: first value
 *@b: second value
 *Return: result
 */
int op_sub(int a, int b)
{
	int resta;

	resta = a - b;
	return (resta);
}

/**
 *op_mul - mul a y b
 *@a: first value
 *@b: second value
 *Return: result
 */
int op_mul(int a, int b)
{
	int multiplicacion;

	multiplicacion = a * b;
	return (multiplicacion);
}
/**
 *op_div - div a y b
 *@a: first value
 *@b: second value
 *Return: result
 */
int op_div(int a, int b)
{
	int division;

	division = a / b;
	return (division);
}
/**
 *op_mod - mod a y b
 *@a: first value
 *@b: second value
 *Return: result
 */
int op_mod(int a, int b)
{
	int modulo;

	modulo = a % b;
	return (modulo);
}
