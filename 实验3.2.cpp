#include <iostream>
using namespace std;
bool is_prime(int num);

int main() {
	int a;
	cout << "������һ������";
	cin >> a;
	if (is_prime(a)) cout << "\n������";
	else cout << "\n��������";
	int i,n;
	cout << "ǰ���ٸ������У�"<<endl;
	for (i = 1, n = 0;n <= 200;i++) {
		if (is_prime(i)) {
			cout<<" "<< i;
			n++;
		}
		if (n % 10 == 0)cout << "\n";
	}
	return 0;
}
bool is_prime(int num) {
	int i;
    for (i = 2;i < num;i++)
		if (num % i == 0)break;
	if (i >= num)return true;
	else return false;
}