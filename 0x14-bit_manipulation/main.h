#ifndef MAIN_H
#define MAIN_H

/**
 *Include libraries
*/
#include <stdio.h>

/**
 *Function Prototypes
*/
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b);
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n);
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index, starting from 0 of the bit to get.
 *
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index);
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number we're modifying.
 * @index: The index, starting from 0 of the bit we want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number we're modifying.
 * @index: The index, starting from 0 of the bit we want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index);
/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);
#endif
