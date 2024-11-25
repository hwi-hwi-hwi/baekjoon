#include <iostream>
#include <map>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		if(n == 0){
			cout << 0 << "\n";
			continue;
		}
		
		map<string, int> clothing;
		
		for(int i = 0; i < n; i++){
			
			string name, type;
			cin >> name >> type;
			clothing[type]++;
		}
		
		int ans = 1;
		for(auto item : clothing){
			
			ans *= (item.second + 1);
		}
		
		cout << ans-1 << "\n";
	}
	
	return 0;
}
