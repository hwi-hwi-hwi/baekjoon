#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		
		cin >> a[i];
	}
	
	sort(a, a+n);
	
	int answer = a[0] * a[n-1];
	cout << answer;	
	
	return 0;
}
