#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int myInt;
long int myLint;
long long int myLLint;
float myFloat;
char myChar;
printf("Size of a char: %lu byte(s)", sizeof(myChar));
printf("\nSize of an int: %lu byte(s)", sizeof(myInt));
printf("\nSize of a long int: %lu byte(s)", sizeof(myLint));
printf("\nSize of a long long int: %lu byte(s)", sizeof(myLLint));
printf("\nSize of a float: %lu byte(s)\n", sizeof(myFloat));
return (0);
}
