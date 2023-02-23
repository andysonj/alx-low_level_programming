#include <stdio.h>

/**
 * main-printing the numbers base 10 from 0
 *
 * Return:Alwayss 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);

}
