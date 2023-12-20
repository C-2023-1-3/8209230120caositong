#include<iostream>
using namespace std;
class student {
public:
    int id, grade;
	void Cin()
	{
		cout << "请输入该学生的学号：";
		cin >> id;
		cout << "请输入该学生的成绩：";
		cin >> grade;
	}
	
};
void Max(student* s, int* m)
	{
		*m = s[0].id;
		int Mg = s[0].grade;
		for (int i = 0;i < 5;i++)
		{
			if (s[i].grade >= Mg)
				*m = s[i].id;
		}
	}
int main() {
	student s[5];
	for (int i = 0;i < 5;i++)
	{
		s[i].Cin();
	}
	int Maxid;
	int* pm = &Maxid;
	Max(s, pm);
	cout << "成绩最高的人的学号为：" << *pm << endl;
	return 0;
}