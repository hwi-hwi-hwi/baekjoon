#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	int sum(0);
	for(int i = 0; i < input.length(); i++){
		
		// 대문자: A = 65, Z = 90 -> 65 - 38 = 27 (A: 27, B: 28, ..., Z: 52)
        // 소문자: a = 97, z = 122 -> 97 - 96 = 1 (a: 1, b: 2, ..., z: 26)
		if(65 <= input[i] && input[i] <= 90)
			sum += input[i] - 38;
		else
			sum += input[i] - 96;
		 
	}
	
	bool is_prime = true;
	if(sum >= 2){
		for(int i = 2; i <= sqrt(sum); i++){
		
			if(sum % i == 0){
				is_prime = false;
				break;
			}
		}
	}
	
	
	if(is_prime)
		cout << "It is a prime word.";
	else
		cout << "It is not a prime word.";
	
	return 0;
}
