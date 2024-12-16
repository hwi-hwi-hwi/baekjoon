#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n, k;
	cin >> n >> k;
	
	vector<int> x(n);
	for(int i = 0; i < n; i++){
		
		cin >> x[i];
	}
	
	sort(x.begin(), x.end());
	
	cout << x[n - k];
	
	return 0;
}
