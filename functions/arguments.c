#include <stdio.h>

int fct(int value);

int	main()
{
	int result;

	result = fct(42);
	printf("value: %d\n", result);
}

int	fct(int value)
{
	return (value * value);
}