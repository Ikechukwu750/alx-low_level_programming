#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by a new line
 * Return: 0 (Succes)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
		putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
