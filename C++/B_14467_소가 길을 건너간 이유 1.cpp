#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int cow[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int count(0);
	
	while(n--){
		
		int a, b;
		cin >> a >> b;
		
		if(cow[a] != -1 && cow[a] != b)
			count++;
		
		cow[a] = b;
	}
	
	cout << count;
	
	return 0;
}
