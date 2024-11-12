#include <iostream>

using namespace std;

int main(){
	
	int num(10), t, ten(10);
	while(ten--){
		
		cin >> t;
		
		if(t == 1){
			num += 1;
		}
		else if(t == 2){
			num += 2;
		}
		else if(t == 3){
			num += -1;
		}
	}
	
	if(num % 4 == 2){
		cout << 'N';
	}
	else if(num % 4 == 0){
		cout << 'S';
	}
	else if(num % 4 == 3){
		cout << 'E';
	}
	else if(num % 4 == 1){
		cout << 'W';
	}
	
	return 0;
}
