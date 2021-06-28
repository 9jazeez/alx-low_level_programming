#include <unistd.h>

/**
 * _putchar - write the c to stdout
 * @c: The character to print
 *
 * Return: On Sucess 1.
 * On error , -1 is returned and errno is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
