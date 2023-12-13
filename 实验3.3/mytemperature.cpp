#include<iostream>
using namespace std;
double celsius_to_fah(double cel) {
	double fah;
	fah = cel * 1.8 + 32.0;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel;
	cel = (fah - 32.0) / 1.8;
	return cel;
}