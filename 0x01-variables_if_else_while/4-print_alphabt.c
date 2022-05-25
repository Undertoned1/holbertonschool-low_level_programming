#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)

{
char x = 'a';
while (x <= 'z')
{
	putchar(x);
	x++;
	if (x != 'q' && x != 'e')
		putchar(x);
}
return (0);
}
