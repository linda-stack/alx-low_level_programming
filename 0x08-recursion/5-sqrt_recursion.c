#include "main.h"
/**
* find_root - helper function to find the natural square root of a number
 * @n: the number to find the square root of
 * @i: the integer to test as the square root of n
 *
 * Return: the natural square root of n or -1 if n does not have a natural
 * square root
 */
int find_root(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (find_root(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (find_root(n, 0));
}
