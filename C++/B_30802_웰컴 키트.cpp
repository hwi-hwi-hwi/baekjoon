#include <iostream>

using namespace std;

int calculate(int, int);

int main(){
	
	int n;
	cin >> n;
	
	int s, m, l, xl, xxl, xxxl;
	cin >> s >> m >> l >> xl >> xxl >> xxxl; 
	
	int t, p;
	cin >> t >> p;
	
	int tshirt(0), pens(0), pen(0);
	
	tshirt += calculate(s, t);
	tshirt += calculate(m, t);
	tshirt += calculate(l, t);
	tshirt += calculate(xl, t);
	tshirt += calculate(xxl, t);
	tshirt += calculate(xxxl, t);
	
	pens = (n / p);
	pen = (n % p);
	
	cout << tshirt << endl;
	cout << pens << ' ' << pen;
	
	return 0;
}

int calculate(int size, int bundle){
	
	return ((size + bundle - 1) / bundle);
}
