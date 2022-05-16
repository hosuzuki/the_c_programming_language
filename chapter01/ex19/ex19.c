#include <stdio.h>
#define MAXLINE 1000

//ft_getline is same as ex16's.
int	ft_getline(char *s, int max)
{
	int	c;
	int	i;
	int	j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (i < max - 2)
		{
			s[j] = c;
			++j;
		}
	}
	if (c == '\n')
	{
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}

void	ft_reverse(char *s)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	while (s[i])
		++i;
	--i;
	if (s[i] == '\n')
		--i;
	j = 0;
	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		--i;
		++j;
	}
}

int	main(void)
{
	char	c;
	char	s[MAXLINE];

	while (ft_getline(s, MAXLINE) > 0)
	{
		ft_reverse(s);
		printf("%s", s);
	}
	return (0);
}
