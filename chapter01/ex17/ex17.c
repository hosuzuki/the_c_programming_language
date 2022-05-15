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


int	main()
{
	int	len;
	char	line[MAXLINE];

	while ((len = ft_getline(line, MAXLINE)) > 0)
	{
		printf("---> length: %d\n", len);
		if (len > 80)
			printf("%s", line);
	}
	return 0;
}
