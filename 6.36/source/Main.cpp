#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

void reStr(char arr[], int target);

void main()
{
	char str[] = "AbCdEfGhIjK";
	reStr(str, sizeof(str)-1);
	cout << endl;
	system("PAUSE");
}

void reStr(char arr[], int target)
{
	cout << arr[target] << " ";
	if (target == 0)
	{
		return;
	}
	reStr(arr, --target);
}