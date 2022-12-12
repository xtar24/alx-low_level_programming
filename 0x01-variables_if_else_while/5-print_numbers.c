#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all single digit number of base 10
 * Starting from 0, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
}
	putchar('\n');
	return (0);
}
