#include <stdio.h>

#define TABINC 8
#define N 10

void	ft_fold(void)
{
	int	c;
	int n;
	int flag;

	n = 0;
	flag = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			n = 0;
			putchar('\n');
		}
		else if (c == ' ' || c == '\t')
		{
			if (n < N && flag == 0)
			{
				++n;
				flag = 1;
				putchar('\n');
			}
			else if (n >= N)
				return ;
		}
		else
		{
			flag = 0;
			putchar(c);
		}
	}
}

int	main(void)
{
	ft_fold();
	return (0);
}
