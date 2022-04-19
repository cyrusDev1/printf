#include "main.h"

/**
 * _to_binary - convert in binary
 * @n: the unsigned int arg is converted to binary
 * Return: binary number
 */

int _to_binary(unsigned int n)
{
	int tab[10], i, count = 0;

	if (n == 0)
	{
		count = _putchar('0');
		return (count);
	}
	if (n == 1)
	{
		count = _putchar('1');
		return (count);
	}
	for (i = 0; n > 0; i++)
	{
		tab[i] = n % 2;
		n /= 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count = _putchar(tab[i] + '0');
	}
	return (count);
}
