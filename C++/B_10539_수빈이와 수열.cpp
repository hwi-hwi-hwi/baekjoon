#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int a[n], b[n], sum(0);
	
	for(int i = 0; i < n; i++){
		
		cin >> b[i];
	}
	
	for(int i = 0 ; i < n; i++){
		
		a[i] = b[i] * (i+1) - sum;
		sum += a[i];
	}
	
	for(int i = 0; i < n; i++){
		
		cout << a[i] << " ";
	}
	
	return 0;
}
