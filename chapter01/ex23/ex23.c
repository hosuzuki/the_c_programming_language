#include <stdio.h>

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
//				putchar('\n');
			}
			else
			{
				putchar(c);
				putchar(d);
			}
		}
		else 
			putchar(c);
	}
}

"dfjkjdf \""

int	main(void)
{
	ft_remove_cmt();
	return (0);
}
