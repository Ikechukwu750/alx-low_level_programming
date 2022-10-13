#include <stdio.h>
#include <unistd.h>

/**
 * main - to write some texts.
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	write(2, "and that piece of art is usefull\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
