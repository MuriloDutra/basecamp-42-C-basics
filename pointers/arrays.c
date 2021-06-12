#include <stdio.h>

void	print_array(int array[])
{
	int counter;

	counter = 0;
	while(counter <= 9)
	{
		printf("%d", array[counter]);
		counter++;
	}
	printf("\n");
}

void	change_array(int *array, int new_value)
{
	int counter;

	counter = 0;
	while(counter <= 9)
	{
		array[counter] = new_value;
		counter++;
	}
}

int	main()
{
	int array[10];
	int counter;
	
	change_array(array, 1);
	print_array(array);

	change_array(array, 2);
	print_array(array);
}