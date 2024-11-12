#include <iostream>
#include <algorithm>  // sort
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++){
		
		cin >> a[i];
	}
	sort(a, a+n);  // 오름차순으로 
	
	int result(0), odd(0);
	for(int i = n-1; i >= 0; i--){  // 내림차순으로 
		
		if(a[i] % 2 != 0){
			if(odd){  // 홀수 2개일 때 더해주기 
				result += odd + a[i];
				odd = 0;  // odd 초기화 
			}
			else
				odd = a[i];
		}
		else
			result += a[i];
	}
	
	cout << result;
	
	return 0;
}
