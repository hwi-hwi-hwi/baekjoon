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
	sort(a, a+n);  // ������������ 
	
	int result(0), odd(0);
	for(int i = n-1; i >= 0; i--){  // ������������ 
		
		if(a[i] % 2 != 0){
			if(odd){  // Ȧ�� 2���� �� �����ֱ� 
				result += odd + a[i];
				odd = 0;  // odd �ʱ�ȭ 
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
