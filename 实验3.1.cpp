#include <iostream>
using namespace std;
int divisor(int a, int b);
int e, f;
int divisor(int a,int b)
{   
	int c, d;
	c = a, d = b;
	if (a > b) {
		for (;1;) {
			a = a % b;
			if (a == 0) break;
			b = b % a;
			if (b == 0) break;
		}
	}
	else {
		for (;1;) {
			b = b % a;
			if (b == 0) break;
			a = a % b;
			if (a == 0) break;
		}
	}
	if (a == 0) e = b;
	else e = a;
	f = c * d / e;
	return e,f;
}
int main()
{
	int m,n;
	cout << "请输入m:";
	cin >> m;
	cout << "\n请输入n:";
	cin >> n;
	divisor(m, n);
	cout << "mn的最大公约数为:" << e << endl;
	cout << "\nmn的最小公倍数为:" << f << endl;
	return 0;
}