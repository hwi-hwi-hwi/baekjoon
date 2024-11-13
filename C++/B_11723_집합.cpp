#include <iostream>
#include <set>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m;
	cin >> m;
	
	set<int> s;
	
	while(m--){
		
		string input;
		cin >> input;
		
		if(input == "add"){
			int x;
			cin >> x;
			s.insert(x);
		}
		else if(input == "remove"){
			int x;
			cin >> x;
			s.erase(x);
		}
		else if(input == "check"){
			int x;
			cin >> x;
			
			if(s.find(x) != s.end())  // 있으면 
				cout << '1' << "\n";
			else
				cout << '0' << "\n";
		}
		else if(input == "toggle"){
			int x;
			cin >> x;
			
			if(s.find(x) == s.end())  // 없으면 
				s.insert(x);
			else
				s.erase(x); 
		}
		else if(input == "all"){
			s = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
		}
		else if(input == "empty"){
			s.clear();
		}
	}
	
	return 0;
}
