#include <stdio.h>

void	fct(void);
void	write_my_name(void);

int main()
{
	fct();
	write_my_name();
	return(0);
}

void	fct(void)
{
	printf("Cuco 42\n");
}
