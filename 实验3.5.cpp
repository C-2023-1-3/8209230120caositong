#include <iostream>
using namespace std;
int all(int sum) {
	if (sum == 1) {
		return 1;
	}
	sum = (all(sum-1) + 1) * 2;
	return sum;
}
int main() {
	cout << "��һ����ӹ�ժ" << all(10) << "�����ӡ�" << endl;
	return 0;
}