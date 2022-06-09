#include <stdio.h>

#define YES 1
#define NO 0

int	ft_htoi(char	*s)
{
	int	hex;
	int	i;
	int	inhex;
	int	res;

	i = 0;
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}
	res = 0;
	inhex = YES;
	while (inhex == YES)
	{
		if ('0' <= s[i] && s[i] <= '9')
			hex = s[i] - '0';
		else if ('a' <= s[i] && s[i] <= 'f')
			hex = s[i] - 'a' + 10;
		else if ('A' <= s[i] && s[i] <= 'F')
			hex = s[i] - 'A' + 10;
		else
			inhex = NO;
		if (inhex == YES)
			res = res * 16 + hex;
	 	++i;
	}
	return (res);
}

int main(void)
{
	char s[10] = "AbCd120";
	int	res;

	res = ft_htoi(s);
	printf("res: %d\n", res);
	return (0);
}
