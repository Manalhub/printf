#include"main.h"

int _putchar(char z)
{
	return (write(1, &z, 1));
}

/**
 * _strcmp - compare strings
 * @s1: the first string
 * @s2: the second string
 */
int _strcmp(const char *s1, const char *s2)
{
	int n = 0;

	while ((s1[n] != '\0') && (s2[n] != '\0'))
	{
		if (s1[n] != s2[n])
		{
			return (-1);
		}
		n++;
	}
	return (s1[n] == s2[n]);
}

/**
 * printchar - prints a single character to stdout
 * return (1)
 */
int printchar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * printstring - prints a string to stdout
 * @str: the string to print
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


