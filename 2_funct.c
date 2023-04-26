#include"main.h"

int (*theprint(const char *format))(va_list)
{
	int i = 0;
	format_t formats[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"d", printinteger},
		{"i", printinteger},
		{NULL, NULL}};

	for (; formats[i].specf != NULL; i++)
	{
		if (*format==*(formats[i].specf))
			return formats[i].function;
	}

	return (NULL);
}
