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
    cout << "请输入数组的元素个数：";
    cin >> n;
    int* a = new int[n];
    cout << "请输入数组的元素：";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cout << " 地址：" << &a[i] << endl;
    }
    px(a, n);
    cout << "排序后的数组元素：";
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    delete[] a;
    return 0;
}

