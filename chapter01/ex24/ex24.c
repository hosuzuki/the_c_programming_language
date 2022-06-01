#include <stdio.h>

int brace;
int	brack;
int	paren;


void	ft_search(int c)
{
	if ( c == '{')
		++brace;
	else if (c == '}')
		--brace;
	else if (c == '[')
		++brack;
	else if (c == ']')
		--brack;
	else if (c == '(')
		++paren;
	else if (c == ')')
		--paren;
}

void	ft_in_comment()
{
	int	c;
	int	d;

	c = getchar();
	d = getchar ();
	while (c != '*' || d != '/')
	{
		c = d;
		d = getchar();
	}
}

void ft_in_quote(int c)
{
	int	d;
	while ((d = getchar()) != c)
	{
		if (d == '\\')
			getchar();
	}
}

int	main(void)
{
	int	c;

	while ((c = getchar()) != EOF)
	{
		if (c == '/')
		{
			if ((c = getchar()) =='*')
				ft_in_comment();
			else
				ft_search(c);
		}
		else if (c == '\'' || c == '"')
			ft_in_quote(c);
		else
			ft_search(c);
		if (brace < 0)
		{
			printf("Unblanced braces\n");
			brace = 0;
		}
		else if (brack < 0)
		{
			printf("Unbalanced brackets\n");
			brack = 0;
		}
		else if (paren < 0)
		{
			printf("Unbalanced parentheses\n");
			paren = 0;
		}
	}
	if (brace > 0)
		printf("Unbalanced braces\n");
	if (brack > 0)
		printf("Unbalanced brackets\n");
	if (paren > 0)
		printf("Unbalanced parentheses\n");
}

