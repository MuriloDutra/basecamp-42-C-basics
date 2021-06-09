#include <stdio.h>

int main()
{
	int	i;

	i = 0;
	while(i < 10)
	{
		printf("break %d\n", i);
		i++;
		break;
	}
	i = 0;
	while(i < 10)
	{
		printf("continue: %d\n", i);
		i++;
		continue;//goes back to the beginning of the loop
		printf("never gets here\n");
	}
}