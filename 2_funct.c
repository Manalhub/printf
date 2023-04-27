#include"main.h"

/**
 * theprint - function that selects the correct function to use
 * asked by the user.
 * @format: operator passed as argument to the program.
 *
 * Return: a pointer to the function that corresponds to the operator given as
 * a parameter. Example: if s is passed as a parameter, this function will
 * return a pointer to the function printstring.
 */

int (*theprint(const char *format))(va_list)
{
	int i = 0;

	format_t formats[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"d", printinteger},
		{"i", printinteger},
		{NULL, NULL}
	};

	for (; formats[i].specf != NULL; i++)
	{
		if (*format == *(formats[i].specf))
			return (formats[i].function);
	}

	return (NULL);
}
