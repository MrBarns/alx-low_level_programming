#include "main.h"
#include <string.h>

/**
 *main - Entry point
 *
 *Return: 0
 *
 */

int main(void)
{
	char word[] = "_putchar";
	int count = strlen(word);
	int index = 0;

	while (index < count)
	{
		_putchar(word[index]);
		index++;
	}
	_putchar('\n');

	return (0);
}
