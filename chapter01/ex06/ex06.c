#include <stdio.h>

int main()
{
	int	c;

	while((c = (getchar() != EOF)))
		printf("%d\n", c); // why this function is called twice once the getchar receive a char?
	printf("%d - at EOF\n", c);
}
