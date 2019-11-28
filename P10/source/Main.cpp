#include <stdio.h>
#include <stdlib.h>

void cubeByRef(int* nPtr);

void main()
{
	int n = 5;
	printf("The original value of number is %d",n);
	cubeByRef(&n);
	printf("\nThe new value of number is %d\n",n);
	system("PAUSE");
}

void cubeByRef(int* nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}