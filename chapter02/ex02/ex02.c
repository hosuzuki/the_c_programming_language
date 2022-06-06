#include <stdio.h>

enum loop {NO, YES};
enum loop okloop = YES;

int main(void)
{
	int i;
	int lim;
	
	i = 0;
	lim = 10;
	while (okloop = YES)
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
	printf("i: %d\n", i);
	return (0);
}
