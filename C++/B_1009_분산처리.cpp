#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		int a, b;
		cin >> a >> b;

		a %= 10;
		
		if(a == 0){
			cout << 10 << "\n";
			continue;
		}
		
		vector<int> cycle;
		int current = a;
		
		do{
			cycle.push_back(current);
			current = (current * a) % 10;
		}
		while(current != a);
		
		int cycle_length = cycle.size();
		int cycle_index = (b-1) % cycle_length;
		
		cout << cycle[cycle_index] << "\n";
	}
	
	return 0;
}
