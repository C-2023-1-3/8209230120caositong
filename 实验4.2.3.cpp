#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
void px(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
}
int main() {
    int n;
    cout << "�����������Ԫ�ظ�����";
    cin >> n;
    int* a = new int[n];
    cout << "�����������Ԫ�أ�";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cout << " ��ַ��" << &a[i] << endl;
    }
    px(a, n);
    cout << "����������Ԫ�أ�";
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    delete[] a;
    return 0;
}

