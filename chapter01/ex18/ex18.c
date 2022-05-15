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

int	ft_remove(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n')
		++i;
	--i;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0)
	{
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}

int	main()
{
	char line[MAXLINE];

	while (ft_getline(line, MAXLINE) > 0)
		if (ft_remove(line) > 0)
			printf("%s", line);
	return 0;
}
