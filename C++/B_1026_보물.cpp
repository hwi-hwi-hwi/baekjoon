#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	vector<int> b(n);
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	
	int min_s = 0;
	for(int i = 0; i < n; i++){
		min_s += (a[i] * b[i]);
	}
	
	cout << min_s;
	
	return 0;
}
