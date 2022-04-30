#include <stdio.h>

int main()
{
	float	fahr;
	float	celsius;
	int	lower;
	int	upper;
	int	step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius Fahr\n");
	fahr = lower;
	while (celsius <= upper)
	{
		fahr = (9.0 * celsius) / 5.0 + 32.0;
		printf("%3.0f   %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}
