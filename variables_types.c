#include <stdio.h>

int	main()
{
	char	c;
	int	i;
	float	f;
	double d;
	long int il;
	short int is;

	c = 'k';
	printf("The size of a CHAR: %lu\n", sizeof(c));
	printf("The letter 'k' is equal to: %d \n", c);
	printf("The number 107 is equal to: %c\n", c);

	printf("The size of an INT: %lu\n", sizeof(i));
	printf("The size of a FLOAT: %lu\n", sizeof(f));
	printf("The size of a DOUBLE: %lu\n", sizeof(d));
	printf("The size of a LONG INT %lu\n", sizeof(il));
	printf("The size of a SHORT INT %lu\n", sizeof(is));
}

//%lu for unsigned long. Source: https://stackoverflow.com/questions/3209909/how-to-printf-unsigned-long-in-c
