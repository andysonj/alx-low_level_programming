#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on Success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i;
	unsigned long large_prime;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			large_prime = i;
			num /= large_prime;
		}
	}
	printf("%lu\n", large_prime);
	return (0);
}


OR
#include <stdio.h>

/**
 * main -  prints the largest prime factor of a number
 *
 * Return: returns 0
 */
int main(void)
{
	long number = 612852475143;
	int inc;

	while (inc++ < number / 2)
	{
	if (number % inc == 0)
	{
		number /= 2;
		continue;
	}
	for (inc = 3; inc < number / 2; inc += 2)
	{
		if (number % inc == 0)
			number /= inc;
	}
	}
	printf("%ld\n", number);
	return (0);
}
