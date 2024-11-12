#include <iostream>

using namespace std;

int gcd(int a, int b){
	
	if(a % b == 0)	return b;
	else return gcd(b, a % b);
}

int main(){
	
	int n, m;
	char s;
	
	cin >> n >> s >> m;
	
	int num = gcd(n, m);
	
	cout << n/num << ':' << m/num;
	
	return 0;
}
