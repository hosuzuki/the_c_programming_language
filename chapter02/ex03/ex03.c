#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	int	i = 0;
	while (str[i])
	{
		if(str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
 	return (NULL);
}

int	ft_scan_letters(char *s)
{
	int	i = 0;

	while(s[i])
	{
		if (!ft_strchr("0123456789abcdefABCDEF", s[i]))
			return (-1);
		++i;
	}
	return (0);
}

int	ft_htoi(char *s)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (!s)
		return (-1);
	if (ft_scan_letters(s) == -1) 
	{
		printf("INPUT ERROR\n");
		return (-1);
	}
	while (s[i])
	{
		if ('a' <= s[i] && s[i] <= 'f')
			res = res * 16 + (s[i] - 'a' + 10);
		else if ('A' <= s[i] && s[i] <= 'F')
			res = res * 16 + (s[i] - 'A' + 10);
		else 
			res = res * 16 + (s[i] - '0');
		++i;
	}
	return (res);
}

int	main(void)
{
	char s[10] = "ABCD2";
	int	res;

	res = ft_htoi(s);
	if (res != -1)
	{
		printf("hex: %s\n", s);
		printf("res: %d\n", res);
	}
	return (0);
}
