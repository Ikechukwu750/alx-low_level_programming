#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by a new line
 * Return: 0 (Succes)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
	putchar(alph);
	}
	putchar('\n');
	return (0);
}
