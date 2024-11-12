#include <iostream>
#include <iomanip>

using namespace std;

double ex(int);

int main(){
	
	int n;
	cin >> n;
	
	cout << fixed << setprecision(20) << ex(n);
	
	return 0;
}

double ex(int n){
	
	double h_sum = 0.0;
	
	for(int k = 1; k <= n; k++){
		
		h_sum += 1.0 / k;  // H(N) °è»ê
	}
	
	return n * h_sum;  // E(N) = N * H(N)
}
