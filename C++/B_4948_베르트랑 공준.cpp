#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

	vector<int> num;
	while(true){
		
		int n;
		cin >> n;
		
		if(n == 0)	break;
		
		int count(0);
		for(int i = n+1; i <= 2*n; i++){
			
			bool isPrime = true;
		
			for(int j = 2; j <= sqrt(i); j++){
				
				if(i % j == 0){
					isPrime = false;
					break;
				}
			}
			
			if(isPrime)		count++;
		}
		
		num.push_back(count);
	}
	
	for(int i = 0; i < num.size(); i++){
		
		cout << num[i] << "\n";
	}
	
	return 0;
}
