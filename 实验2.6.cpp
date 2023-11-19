#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "请输入两个数：";
	cin >> a >> b;
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
	cout << "这两个数的最大公约数为：";
	if (a == 0) e = b;
	else e = a;
	cout << e;
	cout << "这两个数的最大公倍数为：" << c * d / e << endl;
}