#ifndef MAIN_H
#define MAIN_H

/* C standard library headers*/
#include <stdarg.h>
#include <unistd.h>

/* functions prototype */
int _putchar(char z);
int printchar(va_list args);
int printstring(va_list args);
int printpercent(va_list args);
int printint(int n);
int printinteger(va_list args);
int (*theprint(const char *format))(va_list);
int _printf(const char *format, ...);

typedef struct formats
{
	char *specf;
	int (*function)(va_list);
} format_t;

#endif
