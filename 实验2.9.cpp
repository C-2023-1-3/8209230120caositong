#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float each,all=0,day=0;
	for (each = 2.0;all < 100;each = 2 * each,++day)
	{
		all = all + each;
	}
	cout << "平均每天花" << 0.8 * all / day << "元" << endl;
	return 0;
}