#include <stdio.h>

int main()
{
	int i;
	int tab[1];

	i = 7;
	printf("%d\n", tab[1]);
	/*
		tab[1] is possible because tab is crossing his own limit and getting
		the value of the next int, in the case it's i.
	*/
}