#include <iostream>
using namespace std;
int main() {
	int a[11];
	int m=0,n=10;
	cout << "Enter ten numbers:";
	for (int i = 0;i <= 10;i++)
	{
		cin >> a[i];
	}
	while (1) {
		int i = m + 1;
		for (;i <= 10;i++)
		{
			if (a[m] == a[i]) {
				a[m] = 0;
				n--;
			}
		}
		m++;
		if (m == 9) break;
	}
	int b[10];
	for (int i = 0,j=0;i <= 10;i++)
	{
		if (a[i] != 0) {
			b[j] = a[i];
			j++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0;i <= n;i++)
	{
		cout << b[i]<<" ";
	}
	return 0;
}