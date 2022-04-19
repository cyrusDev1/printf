#include "main.h"

/**
 * _to_binary - convert in binary
 * @n: the unsigned int arg is converted to binary
 * Return: binary number
 */

int _to_binary(unsigned int n)
{
	int tab[sizeof(unsigned int) * 8], i, count = 0;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	if (n == 1)
	{
		count += _putchar('1');
		return (count);
	}
	for (i = 0; n > 0; i++)
	{
		tab[i] = '0' + (n % 2);
		n /= 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(tab[i]);
	}
	return (count);
}

/**
 * _to_octal - convert in octal
 * @n: number
 * Return: octal number
 */

int _to_octal(unsigned int n)
{
	int count = 0, i, tab[sizeof(unsigned int) * 8];

	for (i = 0; n != 0; i++)
	{
		tab[i] = (n % 8) + '0';
		n /= 8;
	}
	for (i = i - 1; i <= 0; i--)
		count += _putchar(tab[i]);
	return (count);
}

/**
 * _to_hexa - convert in hexa
 * @n: number
 * Return: hexadecimal number
 */

int _to_hexa(unsigned int n)
{
	int count = 0, mod, tab[sizeof(unsigned int) * 8], i;

	for (i = 0; n != 0; i++)
	{
		mod = n % 16;
		if (mod > 10)
			tab[i] = 55 + mod;
		else
			tab[i] = 48 + mod;
		n /= 16;
	}
	for (i = i - 1; i <= 0; i++)
		count += _putchar(tab[i]);
	return (count);
}
