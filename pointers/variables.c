#include <stdio.h>

void	change_int(int *int_pointer);
void	change_char(char *char_pointer);

int	main()
{
	int	number;
	char	character;

	number = 100;
	character = 'A';

	printf("number: %d\n", number);
	printf("character: %c\n", character);

	change_int(&number);
	change_char(&character);

	printf("number: %d\n", number);
	printf("character: %c\n", character);
}

void	change_int(int *int_pointer)
{
	*int_pointer = 200;
}

void	change_char(char *char_pointer)
{
	*char_pointer = 'B';
}
