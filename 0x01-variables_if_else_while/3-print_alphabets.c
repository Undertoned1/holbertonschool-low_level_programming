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
printf("%c\n", x);
x++;
}

while (xx <= 'Z')
{
printf("%c\n", xx);
xx++;
}

return (0);
}
