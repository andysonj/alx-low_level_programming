#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: number from which to extract last digit
 *
 * Description: Determine last digit of n by
 * isolating remainder of n / 10.
 * Return: extracted last digit
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');
	return (n);
}
