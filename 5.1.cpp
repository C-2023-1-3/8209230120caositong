#include <iostream>
#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:            // 数据成员为私用的
	int hour;
	int minute;
	int sec;
public:
	void Cin()
	{
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >> sec;
	}
	void Cout() 
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.Cin();
	tl.Cout();
	return 0;
}

