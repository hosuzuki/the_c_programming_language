#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main()
{
	int	c;
	int	i;
	int	j;
	int	nc;
	int	state;
	int	maxvalue;
	int	overflow;
	int	wl[MAXWORD];

	state = OUT;
	nc = 0;
	overflow = 0;
	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	while ((c = getchar()) != EOF)
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
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
		if (wl[i] > maxvalue)
			maxvalue = wl[i];
	printf("+-----------------------------------------------\n");
//	for (i = MAXHIST; 0 < i; --i)
	for (i = maxvalue; 0 < i; --i)
	{
		printf("|       |");
		for (j = 1; j < MAXWORD; ++j)
//			if (wl[j] * MAXHIST / maxvalue >= i)
		{
			if (wl[j] >= i)
				printf("  * ");
			else
				printf("    ");
		}
		putchar('\n');
	}
	printf("|       +---------------------------------------\n");
	printf("| count |");
	for (i = 1; i < MAXWORD; ++i)
		printf("%3d ", wl[i]);
	putchar('\n');
	printf("+-----------------------------------------------\n");
	printf("|wordlen|");
	for (i = 1; i < MAXWORD; ++i)
		printf("%3d ", i);
	putchar('\n');
	printf("+-----------------------------------------------\n");
	if (overflow > 0)
		printf("There are %d words >= %d letters\n", overflow, MAXWORD);
}
