#include <stdio.h>

#define MAXCOL 10
#define TABINC 8

char line[MAXCOL];

void	ft_printl(int	pos)
{
	int	i;

	for (i = 0; i < pos; ++i)
		putchar(line[i]);
	if (pos > 0)
		putchar('\n');
}

int	ft_extab(int pos)
{
	line[pos] = ' ';
	for (++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
		line[pos] = ' ';
	if (pos < MAXCOL)
		return (pos);
	else
	{
		ft_printl(pos);
		return (0);
	}
}

int	ft_findblank(int pos)
{
	while (pos > 0 && line[pos] != ' ')
		--pos;
	if (pos == 0)
		return (MAXCOL);
	else
		return (pos + 1);
}

int	ft_newpos(int pos)
{
	int	i;
	int	j;

	if(pos <= 0 || pos >= MAXCOL)
		return (0);
	else
	{
		i = 0;
		for (j = pos; j < MAXCOL; ++j)
		{
			line[i] = line[j];
			++i;
		}
		return (i);
	}
}

void ft_fold(void)
{
	int	c;
	int	pos;

	pos = 0;
	while ((c = getchar()) != EOF)
	{
		line[pos] = c;
		if (c == '\t')
			pos = ft_extab(pos);
		else if (c == '\n')
		{
			ft_printl(pos);
			pos = 0;
		}
		else if (++pos >= MAXCOL)
		{
			pos = ft_findblank(pos);
			ft_printl(pos);
			pos = ft_newpos(pos);
		}
	}
}

int	main(void)
{
	ft_fold();
	return (0);
}
