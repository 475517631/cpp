#include<iostream>
using namespace std;
#include "mao.h"

int main()
{
	int arr1[10] = { 34,24,90,567,13,45,89,78,34,78 };
	double arr2[10] = { 34.0,243,24.7,24.8,45.8,24.90,89.4,13,35.5,23.8 };
	orderarray(arr1, 10);
	orderarray(arr2, 10);
	cout << "hello world" << endl;
	cout << "2commit" << endl;
	/*int a[] = { 1,4,6,7,8,9,10,12,3,15,6 };
	for (int i = 0; i < 11; i++)
		cout << a[i] << " ";*/
	system("pause");
	return 0;
}