#include <stdio.h>

int main()
{
	int	c;

	while((c = (getchar() != EOF)))
		printf("%d\n", c); // why this function is called twice once the getchar receive a char? => becuase getchar recieve a '\n' as well as a char.
	printf("%d - at EOF\n", c);
}
