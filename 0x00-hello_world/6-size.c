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

printf("Size of int: %zu bytes(s)\n", sizeof(intType));
printf("Size of float: %zu bytes(s)\n", sizeof(floatType));
printf("Size of double: %zu bytes(s)\n", sizeof(doubleType));
printf("Size of char: %zu byte(s)\n", sizeof(charType));
return (0);
}
