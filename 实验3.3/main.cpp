#include<iostream>
#include<mytemperature.h>
using namespace std;
int main(){
	double n;
	cout << "输入0时转换或退出。\n";
	cout << "Celsius    Fahrenheit"<<endl;
	while (1) {
		cin >> n;
		if (n == 0.0)
			break;
		cout<<"    "<< celsius_to_fah(n)<<endl;
	}
	cout << "Fahrenheit      Celsius" << endl;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		cout << "      " << fahrenheit_to_cels(n) << endl;
	}
	return 0;
}