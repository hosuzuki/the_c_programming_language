#include <stdio.h>
#define MAXLINE 1000

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

void	ft_copy(char *to, char *from)
{
	int	i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

int	main()
{
	int	len;
	int	max;
	char	line[MAXLINE];
	char	longest[MAXLINE];

	max = 0;
	while ((len = ft_getline(line, MAXLINE)) > 0)
	{
		printf("---> length: %d\n", len);
		if (len > max)
		{
			max = len;
			ft_copy(longest, line);
		}
	}
	if (max > 0)
		printf("---longest---\n%s", longest);
	return 0;
}
