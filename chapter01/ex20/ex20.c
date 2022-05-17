#include <stdio.h>

#define TABINC 8

void	ft_detab(void)
{
	int	c;
	int	nb;
	int	pos;

	nb = 0;
	pos = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			nb = TABINC - (pos % TABINC);
			while (nb > 0)
			{
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if (c == '\n')
		{
			putchar(c);
			pos = 0;
		}
		else
		{
			putchar(c);
			++pos;
		}
	}
}

int main(void)
{
	ft_detab();
	return (0);
}
