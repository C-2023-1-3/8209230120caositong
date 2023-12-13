#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;
int parseHex(const char* const hexString) {
    int a = 0;
    for (int i = 0;i<strlen(hexString); ++i) {
        char c = hexString[i];

        if (c >= '0' && c <= '9') {
            a = a * 16 + (c - '0');
        }
        else if (c >= 'a' && c <= 'f') {
            a = a * 16 + (c - 'a' + 10);
        }
        else if (c >= 'A' && c <= 'F') {
            a = a * 16 + (c - 'A' + 10);
        }
    }
    return a;
}

int main() {
    char a[100];
    cout << "请输入十六进制字符串: ";
    cin.getline(a, strlen(a));
    cout << "转换结果为：" << parseHex(a) << endl;
    return 0;
}

