#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char h;
	int  j;
	cout << "请输入小写字母：" << endl;
	cin >> h;
	if(h>=97&&h<=122){
		j = int(h) - 32;
		cout << "其大写为：" << char(j) << endl;
	}
	else {
		cout << "您输入的并非小写字母" << endl;
	}
	
	return 0;
}
