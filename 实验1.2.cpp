#include<iostream>
using namespace std;



int main()
{
    int r;
    int h;
    double v;
    double a = 1.00 / 3.00;
    const double pai = 3.14;
    cout << "请输入圆锥的半径：" << endl;
    cin >> r ;
    cout << "请输入圆锥的锥高：" << endl;
    cin >> h;
    v = a * r * r * h * pai;
    cout << "那么圆锥的体积为：" << v << endl;
    return 0;

    








}