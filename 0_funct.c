#include"main.h"

/**
 * _putchar - writes the character z to stdout
 * @z: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char z)
{
	return (write(1, &z, 1));
}

/**
 * printchar - prints a single character to stdout
 *
 * return (1)
 */
int printchar(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * printstring - prints a string to stdout
 * @str: the string to print
 *
 * return rev.
 */
int printstring(va_list args)
{
	const char *str;
	int rev = 0;

	str = va_arg(args, const char *);

	if (!str)
		str = "(null)";
	while (*str)
	{
		rev += _putchar(*str);
		if (rev == -1)
			return (-1);
		str++;
	}
	return (rev);
}
