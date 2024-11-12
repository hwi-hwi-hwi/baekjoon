#include <iostream>

using namespace std;

int main(){
	
	int n;  // 항의 개수
	cin >> n;
	
	int a[n], b[n];  // 계수, 차수
	int sum(0); 
	for(int i = 0; i < n; i++){
		
		cin >> a[i] >> b[i];
		
		sum += a[i] * b[i];
	} 
	
	cout << sum;
	
	return 0;
}
