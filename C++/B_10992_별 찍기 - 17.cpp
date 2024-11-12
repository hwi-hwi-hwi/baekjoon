#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		
		// 왼쪽 (첫 번째 별까지) 
		for(int j = n - i; j > 0; j--){
			
			cout << ' ';
		}
		if(i != n)	cout << '*';
		
		// 공백~두 번째 별까지 
		for(int k = 1; k <= 2*(i-1) - 1; k++){
			
			if(i != n)	cout << ' ';
		}
		if(i >= 2 && i != n)	cout << '*';
		
		// 마지막 줄 별 출력 
		if(i == n){
			for(int l = 1; l <= 2*i - 1; l++)
				cout << '*';
		}
		
		cout << endl;
	}
	
	return 0;
}
