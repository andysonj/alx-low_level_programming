#include <stdio.h>
/**
 *main -  print alphabets except e and q
 *
 * Return:Alway 0 (Success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);;
	}
	putchar('\n');
	return (0);
}