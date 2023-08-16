#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two numbers.
 * @a: first number
 * @b: second number.
 * Return: result.
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number.
 * Return: result
 */
int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number.
 * @b: second number.
 * Return: result.
 */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div - divides two numbers.
 * @a: first number
 * @b: second number
 * Return: result.
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - modify two numbers.
 * @a: first number
 * @b: second number
 * Return: result.
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
