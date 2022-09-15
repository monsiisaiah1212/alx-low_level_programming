#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @ch: the function integer
 * Return: to 0
*/
void print_numbers(void)
{
	int ch

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
