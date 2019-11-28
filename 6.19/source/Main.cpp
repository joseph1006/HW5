#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	srand(time(0));
	int arr[12] = {0};
	for (int i = 0; i < 36000; i++)
	{
		int d1 = rand() % 6 + 1;
		int d2 = rand() % 6 + 1;
		arr[d1+d2]++;
	}
	for (int i = 0; i < 12; i++)
	{
		cout << "(" << i << ") :" << arr[i] << "¦¸" << endl;
	}
	system("PAUSE");
}