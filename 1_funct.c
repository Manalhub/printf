#include"main.h"

/**
 * printpercent - prints a percent sign to stdout
 *
 */
int printpercent(va_list args)
{
	(void)(args);
	_putchar('%');
	return (1);
}

int printint(int n)
{
	if ((n / 10) >= 1)
	{
		printint(n / 10);
	}

	_putchar((n % 10) + '0');
	return (1);
}

int printinteger(va_list args)
{
	int n = va_arg(args, int);
	int i = 0;
        if (n == 0)
                i++;

	if (n < 0)
	{
		_putchar('-');
		i++;
		n = -n;
	}

	if ((n / 10) >= 1)
	{
		printint(n / 10);
	}

	_putchar((n % 10) + '0');

	while (n != 0)
	{
		n /= 10;
		i++;
	}

	return (i);
}
