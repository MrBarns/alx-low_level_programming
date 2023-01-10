#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a phrase to the terminal
 *
 * Return: 0
 */

int main(void)
{
int a, b, x, y, n1, n2;

a = 48;
while (a < 58)
{
	b = 48;
	while (b < 58)
	{
		x = 48;
		while (x < 58)
		{
			y = 48;
			while (y < 58)
			{
				n1 = ((a - 48) * 10) + (b - 48);
				n2 = ((x - 48) * 10) + (y - 48);
				if (n2 > n1)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(x);
					putchar(y);

					if (n1 == 98 && n2 == 99)
						break;
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			x++;
		}
		b++;
	}
	a++;
}
putchar('\n');
return (0);
}
