#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int x[n];
	for(int i = 0; i < n; i++){
		
		cin >> x[i];
	}
	
	int max(0);
	for(int i = 0; i < n; i++){
		
		int count(0);
		
		for(int j = i+1; j < n; j++){
			
			if(x[i] >= x[j])
				count++;
			else
				break;
		}
		
		if(count > max)
			max = count;
	}
	
	cout << max;	
	
	return 0;
}
