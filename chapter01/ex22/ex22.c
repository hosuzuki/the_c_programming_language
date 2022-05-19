#include <stdio.h>

#define TABINC 8
#define N 10

void	ft_fold(void)
{
	int	c;
	int n;

	n = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
		{
			if (n < N)
			{
				++n;
				putchar('\n');
			}
			else 
				return ;
		}
		else
			putchar(c);
	}
}

int	main(void)
{
	ft_fold();
	return (0);
}
