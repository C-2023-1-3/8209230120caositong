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
	cout << "第一天猴子共摘" << all(10) << "个桃子。" << endl;
	return 0;
}