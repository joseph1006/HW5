#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int getMax(int arr[], int length, int target);
void main()
{
	int arr[10] = { 1,4,12,7,9,8,6,10,2,3 };
	int max = getMax(arr, 10, 0);
	cout << "Max value is " << max << endl;
	system("PAUSE");
}

int getMax(int arr[], int length, int target)
{
	if (target+1 >= length)
	{
		return arr[0];
	}
	if (arr[target] > arr[0])
	{
		arr[0] = arr[target];
	}
	return getMax(arr, length, target + 1);
}