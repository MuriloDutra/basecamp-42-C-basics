#include <stdio.h>

int main()
{
	int a[10];
	int b[10][10];
	int value = 5;
	int counter;

	a[0] = 42;
	a[1] = 12;
	a[2] = 15;
	a[3] = a[0];
	a[4] = value; 	//The position 4 of a[] will receive 5
	a[value] = 80; 	//The position 5 of a[] will receive 80
	a[6] = 7;
	a[a[6]] = 45;	//The position 7 of a[] will receive 45
	counter = 0;
	while(counter <= 9)
	{
		printf("Position %d: %d \n", counter, a[counter]);
		counter++;
	}
	b[0][0] = 10;	//Line: 0, Column: 0
	b[3][9] = 100;	//Line: 0, Column: 9
	printf("b[0][0]: %d\n", b[0][0]);
	printf("b[3][9]: %d\n", b[3][9]);
}