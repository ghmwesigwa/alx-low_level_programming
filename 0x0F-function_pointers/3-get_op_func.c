#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: int
 * @b: int
 *
 * Return: sum (int)
 */

int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - subtracts two numbers
 * @a: value to subtract from (int)
 * @b: value to subtract (int)
 *
 * Return: difference (int)
 */

int op_sub(int a, int b) { return (a - b); }

/**
 * op_div - divides a by b
 * @a: dividend (int)
 * @b: divisor (int)
 *
 * Return: quotient (int)
 */
int op_div(int a, int b) { return (a / b); }

/**
 * op_mod - calculates modulo
 * @a: dividend (int)
 * @b: divisor (int)
 *
 * Return: remainder (int)
 */
int op_mod(int a, int b) { return (a % b); }

/**
 * op_mul - multiplies two numbers
 * @a: int
 * @b: int
 *
 * Return: product (int)
 */
int op_mul(int a, int b) { return (a * b); }
