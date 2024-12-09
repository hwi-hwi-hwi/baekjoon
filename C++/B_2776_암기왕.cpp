#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n, m;
		cin >> n;
		unordered_set<int> notebook;
		for(int i = 0; i < n; i++){
			
			int num;
			cin >> num;
			notebook.insert(num);
		}
		
		cin >> m;
		for(int i = 0; i < m; i++){
			
			int num;
			cin >> num;
			
			if(notebook.count(num))
				cout << '1' << "\n";
			else
				cout << '0' << "\n";
		}	
	}
	
	return 0;
}
