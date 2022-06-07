#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	putchar(num + '0');

	putchar('\n');

	return (0);
}
