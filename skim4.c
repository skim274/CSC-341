// Sung Kim
// CSC 341
// Lab 4
#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int *values;
	int i;

	printf("The address of argc is %p \n", &argc);
	printf("The address of the Stack variables are %p for values and %p for i \n", values, &i);

	values = (int *)malloc(sizeof(int)*5);

	for(i = 0; i < 5; i++)
	{
		values[i] = i;
		printf("For Heap variables, the address of values[%d] is %p \n", i, &values[i]);
	}

	printf("For uninitialized data, the address of x is %p \n", &x);
	printf("For initialized data, the address of y is %p \n", &y);

	return EXIT_SUCCESS;
}
