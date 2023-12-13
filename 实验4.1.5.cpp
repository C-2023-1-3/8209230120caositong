#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int indexOf(char s1[], char s2[],int n,int m) {
	int cg = -1;
	for (int i = 0;i < m;i++) {
		if (s1[0] == s2[i]) {
			int a = 0;
			for (int j = 0;j < n;j++) {
				if (s1[j] == s2[j + i])a++;
			}
			if (a == n) {
				cg = i;
				break;
			}
		}
	}
	return cg;
}
int main() {
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin.getline(s1, strlen(s1));
	cout << "Enter the second string:";
	cin.getline(s2, strlen(s2));
	cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is" << indexOf(s1, s2, strlen(s1), strlen(s2)) << endl;
	return 0;
}


