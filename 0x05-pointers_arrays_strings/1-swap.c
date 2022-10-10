#include "main.h"
/**
 * main - void swap_int(int *a, int *b);
 * Description: Write a function that swaps the values of two integers.
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
