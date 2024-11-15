#include <iostream>

using namespace std;

int main(){
	
	int x, y;
	cin >> x >> y;
	
	int a, b, c, d;
	a = x * (y % 10);
	b = (x * ((y % 100) -(y % 10))) / 10;
	c = (x * (y - (y % 100))) / 100;
	d = a + b*10 + c*100;
	
	cout << a << "\n" << b << "\n" << c << "\n" << d;
		
	return 0;
}
