#include <stdio.h>

void	ft_print_quote(int c)
{
	int	d;

	putchar(c);
	while ((d = getchar()) != c)
	{
		putchar(d);
		if (d == '\\')
			putchar(getchar());
	}
	putchar(d);
}

void ft_remove_cmt(void)
{
	int	c;
	int	d;

	while ((c = getchar()) != EOF)
	{
		if (c == '/')
		{
			if ((d = getchar()) == '/')
			{
				while ((c = getchar()) != '\n')
				{}
			}
			else if (d == '*')
			{
				d = getchar();
				while (c != '*' || d != '/')
				{
					c = d;
					d = getchar();
				}
			}
			else
			{
				putchar(c);
				putchar(d);
			}
		}
		else if (c == '\'' || c == '"')
			ft_print_quote(c);
		else 
			putchar(c);
	}
}

int	main(void)
{
	ft_remove_cmt();
	return (0);
}
