#include <iostream>
#include <vector>

using namespace std;

int n, m;

vector<int> v;
bool visited[9];

void backtrack(){
	if(v.size() == m){
		for(int num : v){
			cout << num << " ";
		}
		
		cout << "\n";
		return;
	}
	
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			visited[i] = true;
			v.push_back(i);
			
			backtrack();
			
			visited[i] = false;
			v.pop_back();
		}
	}
}

int main(){
	cin >> n >> m;
	
	backtrack();
	
	return 0;
}
