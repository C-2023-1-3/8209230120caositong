#include <iostream>
using namespace std;
int main() {
	bool a[100];
	int n=1;
	for (int i = 0;i <= 99;i++)
	{
		a[i] = 0;
	}
	while (1) {
		for (int i = 1;i*n <= 100;i++)
		{
			if (a[i * n - 1] == 0)a[i * n - 1] = 1;
			else a[i * n - 1] = 0;
		}
		n++;
		if (n == 101)break;
	}
	for (int i = 0;i <= 99;i++)
	{
		if (a[i] == 1)
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}
