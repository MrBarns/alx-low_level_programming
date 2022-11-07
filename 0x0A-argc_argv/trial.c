#include <stdio.h>
#include <string.h>


int main()
{
	char *s = "Monahymen";
	int c;
	int l = (int) strlen(s);

	for (c = 0; c < l; c++)
		printf("%d\n", c);

	printf("%d\n", l);

	return (0);
}
