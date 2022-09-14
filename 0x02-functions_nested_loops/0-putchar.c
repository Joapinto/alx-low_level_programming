#include "main.h"
/**
 * main - main function
 *
 * Return: End program
 */
int main(void)
{
	char string[8] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(string[n]);
		++n;
	}

	_putchar('\n');
	return (0);
}
