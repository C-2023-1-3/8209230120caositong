#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float h;
	float s;
	cout << "华氏温度为：" << endl;
	cin >> h;
	s = (h - 32.0) * 5.0 / 9.0;
	cout << "摄氏温度为：" <<s<< endl;
	return 0;
}
