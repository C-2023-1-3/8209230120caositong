#include <iostream>
using namespace std;
int main() {
	float a[11];
	cout << "����10������";
	for (int i = 0;i <= 10;i++)
	{
		cin >> a[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 10; j++)
			if (a[j] >a[j + 1])
			{
				swap( a[j] , a[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "���������Ϊ��";
	for (int i = 0;i <= 10;i++)
	{
		cout << a[i]<<" ";
	}
	return 0;
}