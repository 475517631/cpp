#pragma once
template <typename T>//����ģ�壬�����ʾT��һ��δ������������
void orderarray(T* arr, int num)
{
	for (int i = 0; i < num; i++)//ð���㷨
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