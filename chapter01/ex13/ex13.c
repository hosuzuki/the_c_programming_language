#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main()
{
	int	c;
	int	i;
	int	nc;
	int	state;
	int	len;
	int	overflow;
	int	wl[MAXWORD];

	state = OUT;
	nc = 0;
	overflow = 0;
	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	while ((c = getchar ()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			if (nc > 0)
			{
				if (nc < MAXWORD)
					++wl[nc];
				else
					++overflow;
			}
			nc = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			nc = 1;
		}
		else
			++nc;
	}
	printf("-------+----------------\n");
	printf("len of |\nwords  |  count\n");
	printf("-------+----------------\n");
	for (i = 1; i < MAXWORD; ++i)
	{
		printf("%6d | %3d : ", i, wl[i]);
		if (wl[i] > 0)
			len = wl[i];
		else
			len = 0;
		while (0 < len)
		{
			putchar ('*');
			--len;
		}
		putchar('\n');
	}
	if (overflow > 0)
		printf("There are %d words >= %d letters\n", overflow, MAXWORD);
}
