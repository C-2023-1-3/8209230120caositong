#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	char d;
	cin >> a >> d >> b;
	if (int(d) == 43) {
		cout << "=" << a + b << endl;
	}
	else if (int(d) == 45) {
		cout << "=" << a - b << endl;
	}
	else if (int(d) == 42) {
		cout << "=" << a * b << endl;
	}
	else if (int(d) == 47) {
		if (b == 0) cout << "除数不能为0！" << endl;
		else cout << "=" << static_cast<float>(a) / b << endl;
	}
	else if (int(d) == 37) {
		if (b == 0) cout << "除数不能为0！" << endl;
		else cout << "=" << a % b << endl;
	}
	else cout << "运算符不合法！" << endl;
	
	


	return 0;
}
