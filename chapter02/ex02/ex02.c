#include <stdio.h>

enum loop {NO, YES};
enum loop okloop = YES;

int	main(void)
{
	int	c;
	int i;
	int lim;
	char s[20];

	i = 0;
	lim = 10;
	while (okloop == YES)
	{
		if (i >= lim - 1)
			okloop = NO;
		else if ((c = getchar()) == '\n')
			okloop = NO;
		else if (c == EOF)
			okloop = NO;
		else 
		{
			s[i] = c;
			++i;
		}
	}
	s[i] = '\0';
	printf("i: %d\n", i);
	printf("s: %s\n", s);
	return (0);
}
