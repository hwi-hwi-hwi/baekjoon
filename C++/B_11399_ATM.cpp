#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int time[n];
	for(int i = 0; i < n; i++){
		
		cin >> time[i];
	}
	
	sort(time, time + n);
	
	int time_2(0);
	int sum(0);
	for(int i = 0; i < n; i++){
		
		time_2 += time[i];
		sum += time_2;
	}
	
	cout << sum;
	
	return 0;
}
