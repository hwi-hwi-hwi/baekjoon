#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	if(n == 0){
		cout << 0;
		return 0;
	}
	
	int level[n];
	for(int i = 0; i < n; i++){
		
		cin >> level[i];
	}
	
	sort(level, level+n);
	
	int except = round(n * 0.15);
	
	int m = n - (2 * except);
	double sum(0);
	for(int i = except; i < n - except; i++){
		
		sum += level[i];
	}
	
	int ans = round(sum / m);
	
	cout << ans;
		
	return 0;
}
