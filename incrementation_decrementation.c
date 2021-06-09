#include <stdio.h>

int main()
{
	int	x;
	int	y;
	int	a;

	x = 42;
	x++;
	y = 42;
	y--;
	a = 50;
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", ++a);	//It ADDS one then the a's value becomes 51 and then prints it
	printf("%d\n", a++);	//It prints the a's value, then ADDS one in a
	printf("%d\n", --a);	//It REMOVES one then the a's value becomes 49 and then prints it
	printf("%d\n", a--);	//It prints the a's value, then REMOVES one from a
}
