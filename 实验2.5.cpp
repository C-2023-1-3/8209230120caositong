#include <iostream>
using namespace std;
int main()
{
	char a;
	int yw=0, sz=0, kg=0, qt=0;
	cout << "请输入字符串：";
	cin >> a;
	for (;1;) {

		if (a <= 'z' && a >= 'a') yw++;
		else if (a <= 'Z' && a >= 'A') yw++;
		else if (a <= '9' && a >= '0') sz++;
		else if (a == ' ') kg++;
		else qt++;
		if ((a = getchar()) == '\n') break;
	}
	cout << "\n英文字符一共有：" << yw << "\n数字字符一共有：" << sz << "\n空格一共有：" << kg << "\n其他字符一共有：" << qt << endl;
	return 0;
}