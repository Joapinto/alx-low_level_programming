#include "main.h"
/**
 * print_alphabet - Entry point
 * Description - prints the alphabets in lowercase
 * return
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}

	_putchar('n/');
}
