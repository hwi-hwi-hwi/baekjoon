#include <iostream>

using namespace std;

int main(){

	// 남 >= 영 + 2
	// 택, 영, 남 > 0
	// 택 % 2 = 0
	
	int ans(0);
	int n;
	cin >> n;
	
	for(int i = 1; i <= 100; i++){
		
		for(int j = 1; j <= 100-i; j++){
			
			for(int k = 1; k <= 100-i-j; k++){
				
				if(i+j+k == n && k >= j+2 && j > 0 && k > 0 && i % 2 == 0)
					ans++;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}  
