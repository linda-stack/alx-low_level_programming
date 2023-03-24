/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/*
	 * ASCII values of uppercase letters range from 65 to 90,
	 * so check if the given character's ASCII value is within this range.
	 */
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
