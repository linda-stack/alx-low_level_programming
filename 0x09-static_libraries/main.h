#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
int putchar(int character);
int _putchar(char c);

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 *
 * Return: the absolute value of n
 */
int _abs(int n);

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s);

/**
 * _puts - writes a string to the standard output
 * @s: the string to be written
 */
void _puts(char *s);

/**
 * _strcpy - copies a string
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes from src
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string, using at most n bytes from src
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes from src
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match,
 * or be greater than s2
 */
int _strcmp(char *s1, char *s2);

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the memory area
 * @b: the constant byte to be filled
 * @n: the number of bytes to be filled
 *
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence
 *of the character in the string
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: the number of characters in the initial segment of s
 * that consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the characters to search for
 *
 * Return: a pointer to the first occurrence in
 *s of any of the characters
 * in accept or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept);
/**
 * Finds the first occurrence of the substring
 *needle in the string haystack.
 *
 * Args:
 *   haystack: The string to search.
 *   needle: The substring to search for.
 *
 * Returns:
 *   The pointer to the first occurrence
 *of needle in haystack, or NULL if needle
 *   is not found.
 */
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
