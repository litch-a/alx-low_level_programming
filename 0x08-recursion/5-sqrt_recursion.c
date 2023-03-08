#include "main.h"
/**
 * sqrt_root - find the natural square root of a number
 * @n: number to find the square root
 * @i: square root to compare
 * Return: root square or -1 if n does not have square root
 */
int sqrt_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqrt_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: an integer root square or -1 if n does not have square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (sqrt_root(n, i));
}
