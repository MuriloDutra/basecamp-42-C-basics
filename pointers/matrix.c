#include <stdio.h>

void	print_matrix(int matrix[4][4])
{
	int	line;
	int	column;

	line = 0;
	while(line <= 3)
	{
		column = 0;
		while(column <= 3)
		{
			printf("%d", matrix[line][column]);
			printf(" ");
			column++;
		}
		printf("\n");
		line++;
	}
	printf("\n");
}

void	change_matrix(int new_value, int (*matrix)[4][4])
{
	int	line;
	int	column;
	
	line = 0;
	while(line <= 3)
	{
		column = 0;
		while(column <= 3)
		{
			(*matrix)[line][column] = new_value;
			column++;
		}
		line++;
	}
}

int	main()
{
	int	matrix[4][4];

	change_matrix(1, &matrix);
	print_matrix(matrix);

	change_matrix(2, &matrix);
	print_matrix(matrix);
}
