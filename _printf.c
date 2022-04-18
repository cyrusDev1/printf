#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: number of characteres printed
 */

int _printf(const char *format, ...)
{
	int i, flag = 0, total = 0;
	va_list args;

	if (format == NULL)
		return (0);
	va_start(args, format);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (format[i] == '%')
		{
			flag = 1;
		}else if (flag == 1)
		{
			flag = 0;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					total += 1;
					break;
				case 's':
					total += _print_str(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					total += 1;
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					total += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			total += 1;
		}
	}
	va_end(args);
	return (total);
}