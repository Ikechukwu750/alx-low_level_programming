#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intVar;
	float floatVar;
	long longVar;
	long long longLongVar;
	char charVar;

	printf("Size of a char: %zu byte(s)\n", sizeof(charVar));
	printf("Size of an int: %zu byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longVar));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongVar));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatVar));

	return (0);
}
