#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by a new line
 * Return: 0 (Succes)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
