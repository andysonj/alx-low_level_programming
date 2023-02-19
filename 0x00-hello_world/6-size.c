#include<stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a long int: %lu bytes(s)\n", sizeof(long));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long));
printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));
return (0);
}
