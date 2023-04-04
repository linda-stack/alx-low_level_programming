#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to set
 * @to: string to set the pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = to;
}
int main(void)
{
char *s0 = "Bob Dylan";
char *s1 = "Robert Allen";
printf("%s, %s\n", s0, s1);
set_string(&s1, s0);
printf("%s, %s\n", s0, s1);
return (0);
}
