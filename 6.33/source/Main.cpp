#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int bs(int arr[], int value, int s, int e);

void main()
{
	int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int x = 30;
	int y = 90;
	int z = 55;
	cout << "Value is " << x << "  return" << bs(arr, x, 0, sizeof(arr) - 1) << endl;
	cout << "Value is " << y << "  return" << bs(arr, y, 0, sizeof(arr) - 1) << endl;
	cout << "Value is " << z << "  return" << bs(arr, z, 0, sizeof(arr) - 1) << endl;
	system("PAUSE");
}

int bs(int arr[], int value, int s, int e)
{
	int find = -1;
	int center;
	while (s <= e) 
	{
		center = s + (e - s) / 2;
		if (arr[center] < value)
		{
			s = center + 1;
		}
		else if (arr[center] > value)
		{
			e = center - 1;
		}
		else 
		{
			find = center;
			break;
		}
	}
	return find;
}