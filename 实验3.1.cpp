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
	cout << "������m:";
	cin >> m;
	cout << "\n������n:";
	cin >> n;
	divisor(m, n);
	cout << "mn�����Լ��Ϊ:" << e << endl;
	cout << "\nmn����С������Ϊ:" << f << endl;
	return 0;
}