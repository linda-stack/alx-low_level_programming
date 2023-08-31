#include "main.h"

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: string to check
*
* Return: 1 if s is a palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (_is_palindrome_helper(s, len - 1, 0));
}

/**
* _is_palindrome_helper - helper function to check if a string is a palindrome
* @s: string to check
* @end: index of the last character in the string
* @start: index of the first character in the string
*
* Return: 1 if s is a palindrome, otherwise 0
*/
int _is_palindrome_helper(char *s, int end, int start)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (_is_palindrome_helper(s, end - 1, start + 1));
}

/**
* _strlen_recursion - returns the length of a string
* @s: string to measure
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
