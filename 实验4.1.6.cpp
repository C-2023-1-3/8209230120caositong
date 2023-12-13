#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
void count(char s[], int counts[]);

void count(char s[], int counts[],int n)
{
	for (int i = 0;i < n;i++)
	{
		if (s[i]<=122&&s[i]>=97) {
			counts[int(s[i]) - 97]++;
		}
		else if(s[i]<=90&&s[i]>=65) {
			counts[int(s[i]) - 65]++;
		}
	}
}
int main() {
	char a[100];
	int b[26] = { 0 };
	int m = 25,n=0;
	cout << "Enter a string:";
	cin.getline(a,strlen(a));
	count(a, b, strlen(a));
	for (int i = 0;i <= 25;i++)
	{
		if (b[i] != 0) {
			cout << char(i+97) << ":" << b[i] << "times" << endl;
		}
	}
	return 0;
}
