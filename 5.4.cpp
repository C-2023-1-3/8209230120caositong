#include<iostream>
using namespace std;
class student {
public:
    int id, grade;
	void Cin()
	{
		cout << "�������ѧ����ѧ�ţ�";
		cin >> id;
		cout << "�������ѧ���ĳɼ���";
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
	cout << "�ɼ���ߵ��˵�ѧ��Ϊ��" << *pm << endl;
	return 0;
}