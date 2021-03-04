#pragma once
template <typename T>//函数模板，这里表示T是一个未定的数据类型
void orderarray(T* arr, int num)
{
	for (int i = 0; i < num; i++)//冒泡算法
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}