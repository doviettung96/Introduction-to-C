#include <stdio.h>

void main()
{
	int a;
	int chuc, donvi;
	printf("Type in a 2-digit number: ");
	scanf("%d", &a);
	donvi = a % 10;
	chuc = (a - donvi) / 10;
	printf("Sum of 2 digits: %d\n", chuc + donvi);
}