#include <stdio.h>

int main()
{
	int	c;
	int	lastc;

	lastc = 'a';
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);
		lastc = c;
	}
}
