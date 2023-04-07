#include "main.h"
int check_palindrome(char *s, int start, int end);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (check_palindrome(s, 0, len - 1));
}
/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the substring to check
 * @end: the ending index of the substring to check
 *
 * Return: 1 if s is a palindrome, otherwise return 0
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}
