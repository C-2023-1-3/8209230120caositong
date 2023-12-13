#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
void merge2(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;;
	while (i < size1 && j < size2) 
	{
		if (list1[i] < list2[j]) {
			list3[k] = list1[i];
			k++;
			i++;
		}
		else if(list1[i] > list2[j]) {
			list3[k] = list2[j];
			k++;
			j++;
		}else { 
			list3[k++] = list1[i++];
		}
	}
	while (i < size1) 
	{
		list3[k] = list1[i];
		k++;
		i++;
	}
	while (j < size2) 
	{
		list3[k] = list2[j];
		k++;
		j++;
	}
}

int main() {
	int a[80], b[80], n, m,c[160];
	cout << "Enter list1:";
	cin >> n;
	for (int i=0;i < n;i++) 
	{
		cin >> a[i];
	}
	cout << "\nEnter list2:";
	cin >> m;
	for (int i=0;i < m;i++)
	{
		cin >> b[i];
	}
	merge2(a, n, b, m, c);
	cout << "The merged list is";
	for (int i = 0;i < n + m;i++)
	{
		cout << c[i] << " ";
	}
	return 0;
}

