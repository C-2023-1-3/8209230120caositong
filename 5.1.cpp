#include <iostream>
#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:            // ���ݳ�ԱΪ˽�õ�
	int hour;
	int minute;
	int sec;
public:
	void Cin()
	{
		cin >> hour;      //�����趨��ʱ�� 
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
	Time tl;           //����t1ΪTime�����
	tl.Cin();
	tl.Cout();
	return 0;
}

