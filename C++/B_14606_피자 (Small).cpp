#include <iostream>

using namespace std;

int getFun(int);

int main(){
	
	int n;
	cin >> n;
	
	cout << getFun(n);
	
	return 0;
}

int getFun(int n){
	
	if(n == 1)	return 0;
	
	int a, b;
	if(n % 2 == 0){
		a = n / 2;
		b = n / 2;
	}
	else{
		a = (n / 2) + 1;
		b = n / 2;
	}
	
	return ((a*b) + getFun(a) + getFun(b));
}
