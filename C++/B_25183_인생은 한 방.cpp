#include <iostream>
#include <cmath>  // abs 함수 사용 
using namespace std;

int main(){
	
	int n;
	string lotto;
	bool check = false;
	cin >> n >> lotto;
	
	for(int i = 0; i <= n-5; i++){
		
		bool is_valid = true;
		
		for(int j = i; j < i+4; j++){
			
			if(abs(lotto[j] - lotto[j+1]) != 1){
				is_valid = false;
				break;
			}
		}
		
		if(is_valid){
			check = true;
			break;
		}
	}
	
	if(check)	cout << "YES";
	else cout << "NO";
	
	return 0;
}
