#include <stdio.h>

int ftc(void);

int	main()
{
	int	i;

	i = ftc();
	printf("%d\n", i);
	return(0);
}

int	ftc(void)
{
	return(42);
}
