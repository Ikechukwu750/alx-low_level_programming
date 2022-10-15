#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by a new line
 * Return: 0 (Succes)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
