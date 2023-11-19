#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三条边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b) {
		if (b + c > a) {
			cout << "三角形周长为" << a + b + c << endl;
			if (b == a || b == c) {
				cout << "这是等腰三角形" << endl;
			}
			else if (a == c) {
				cout << "这是等腰三角形" << endl;
			}
			else cout << "这不是等腰三角形" << endl;
		}
		else cout << "这无法构成三角形" << endl;

	}
	else cout << "这无法构成三角形" << endl;
	return 0;
}
