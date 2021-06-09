#include <stdio.h>

int	main()
{
	int	i;

	i = 0;
label:
	printf("Hello");
	/*while(i < 20)
	{
		printf("%d\n", i);
		
	}*/
	goto label;
}
