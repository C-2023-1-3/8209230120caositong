#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int h, l;
	for (h = 1, l = 1;h <= 5;)
	{
		for (;l <= h;++l) { cout << "*"; }
		l = 1;
		++h;
		cout <<"\n";
	}

	
	


	return 0;
}
