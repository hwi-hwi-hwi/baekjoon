#include <iostream>
#include <string>

using namespace std;

int alphaToInt(char);

int main(){
	
	int n;
	cin >> n;
	
	string input;
	cin >> input;
	
	int r = 31, M = 1234567891;
	long long sum = 0, power = 1;
	for(int i = 0; i < input.length(); i++){
		
		sum += (alphaToInt(input[i]) * power) % M;
		sum %= M;  // 오버플로우 방지 
		power = (power * r) % M;
	}
	
	cout << sum;
	
	return 0;
}

int alphaToInt(char x){
	
	return (x - 'a' + 1);
}
