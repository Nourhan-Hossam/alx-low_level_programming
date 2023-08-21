#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int x, w, len;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	len = x;

	for (w = len - 1; w >= 0; w--)
	{
		_putchar(s[w]);
	}

	_putchar('\n');
}
