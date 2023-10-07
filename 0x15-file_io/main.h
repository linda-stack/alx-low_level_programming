#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         0 if the file can not be opened or read,
 *         if filename is NULL, or if write fails or does not write
 *         the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * error - Prints an error message and exits the program.
 * @msg: The error message to print.
 * @file: The file name to print in the error message.
 * @exit_code: The exit code to use when exiting the program.
 */
void error(char *msg, char *file, int exit_code);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 *
 * Return: 0 if successful, or one of 97, 98, 99, 100 if an error occurs.
 */
int main(int argc, char *argv[]);

/**
 * error - Prints an error message and exits the program.
 * @msg: The error message to print.
 * @file: The file name to print in the error message.
 * @exit_code: The exit code to use when exiting the program.
 */
void error(char *msg, char *file, int exit_code);

/**
 * print_string - Prints a string character by character.
 * @str: The string to print.
 */
void print_string(char *str);

/**
 * print_hex - Prints a byte as a two digit hexadecimal number.
 * @c: The byte to print.
 */
void print_hex(unsigned char c);

#endif
