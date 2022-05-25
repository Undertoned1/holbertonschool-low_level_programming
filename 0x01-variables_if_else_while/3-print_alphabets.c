#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)

{
char x = 'a';
char xx = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}

while (xx <= 'Z')
{
putchar(xx);
xx++;
}
if (xx == 'Z')
putchar('\n');

return (0);
}
