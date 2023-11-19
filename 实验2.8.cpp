#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float a, x, X;
	cout << "请输入a为：" << endl;
	cin >> a;
	for (x = a;1;) 
	{

		X = 0.5 * (x + a / x);
		if (X - x<1.0e-5 && X - x>-1.0e-5)break;
		x = X;
	}
	cout << "a的平方根为：" << X << endl;
	return 0;
}
//若使a可为负数：
//将for循环改为:
//if (a != 0) {
//	if (a > 0) {
//		for (x = a;1;)
//		{
//			X = 0.5 * (x + a / x);
//			if (X - x<1.0e-5 && X - x>-1.0e-5)break;
//			x = X;
//		}
//		cout << "a的平方根为：" << X << endl;
//	}
//	else {
//		for (a = -a, x = a;1;)
//		{
//			X = 0.5 * (x + a / x);
//			if (X - x<1.0e-5 && X - x>-1.0e-5)break;
//			x = X;
//		}cout << "a的平方根为：" << X << "i" << endl;
//	}
//}
//else cout << "a的平方根为：0";