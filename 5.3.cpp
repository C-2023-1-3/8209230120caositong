#include<iostream>
using namespace std;
class cuboid {
private:
	int length, width, height,v;
public:
	void Cin()
	{
		cout << "�밴˳�����볤�����ĳ������ߣ�";
		cin >> length >> width >> height;
	}
	void count()
	{
		v = length * width * height;
	}
	void Cout()
	{
		cout << "�����������Ϊ��" << v << endl;
	}
};
int main() {
	cuboid c1, c2, c3;
	c1.Cin();
	c1.count();
	c1.Cout();
	c2.Cin();
	c2.count();
	c2.Cout();
	c3.Cin();
	c3.count();
	c3.Cout();
	return 0;
}