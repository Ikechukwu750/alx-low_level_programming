#include <stdio.h>

/**
 * main - prints alphabet in lowercase and then uppercass
 * followed by a new line
 * Return: 0 (Succes)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
