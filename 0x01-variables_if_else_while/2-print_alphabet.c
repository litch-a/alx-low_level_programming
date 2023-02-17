#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random character it with 5
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
