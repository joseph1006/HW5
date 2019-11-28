#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int n);

void main()
{
	int n = 5;
	printf("The original value of number is %d", n);
	n = cubeByValue(n);
	printf("\nThe new value of number is %d\n", n);
	system("PAUSE");
}

int cubeByValue(int n)
{
	return n * n * n;
}