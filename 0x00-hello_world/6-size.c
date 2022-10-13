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

	printf("Size of char: %zu byte(s)\n", sizeof(charVar));
	printf("Size of int: %zu byte(s)\n", sizeof(intVar));
	printf("Size of long: %zu byte(s)\n", sizeof(longVar));
	printf("Size of long long: %zu byte(s)\n", sizeof(longLongVar));
	printf("Size of float: %zu byte(s)\n", sizeof(floatVar));

	return (0);
}
