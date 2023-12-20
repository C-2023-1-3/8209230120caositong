#include<iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	void initialize() 
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	point p1;
	p1.initialize();
	int x, y;
	cin >> x >> y;
	p1.setPoint(x,y);
	p1.display();
	return 0;
}