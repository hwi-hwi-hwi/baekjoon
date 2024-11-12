#include <iostream>
#include <set>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	
	set<int> s;
	for(int i = 0; i < n; i++){
		
		int x;
		cin >> x;
		
		s.insert(x);
	}
	
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		
		int y;
		cin >> y;
		
		if(s.find(y) != s.end())
			cout << "1 ";
		else
			cout << "0 ";
	}
	
	return 0;
}
