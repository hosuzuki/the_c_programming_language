#include <stdio.h>

void Ft_remove_cmt(void)
{
	int	c;
	int d;

	while ((c = getchar()) != EOF)
	{
		if (c == '/')
		{
			if ((d = getchar()) == '\')
			{
				while ((c = getchar()) != '\n')
				{}
			}
			else
				putchar(c);
		}
		else 
			putchar(c);
	}
}

int	main(void)
{
	ft_remove_cmt();
	return (0);
}
