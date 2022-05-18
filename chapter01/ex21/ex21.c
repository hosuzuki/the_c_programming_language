#include <stdio.h>

#define TABINC 8

void	ft_entab(void)
{
	int	c;
	int	nb;
	int	b;
	int	pos;
	int	flag;

	b = 0;
	nb = 0;
	pos = 0;
	flag = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && flag == 1)
		{
			flag = 0;
			while (b > 0)
			{
				nb = TABINC - (pos % TABINC);
				if (b >= nb)
				{
					putchar('\t');
					pos += nb;;
					b -= nb;;
				}
				else 
				{
					putchar(' ');
					++pos;
					--b;
				}
			}
		}
		if (c == ' ')
		{
			++b;
			flag = 1;
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
	ft_entab();
	return (0);
}
