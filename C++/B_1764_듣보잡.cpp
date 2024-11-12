#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	unordered_set<string> unheard;
	vector<string> notSaw;
	
	for(int i = 0; i < n; i++){
		
		string name;
		cin >> name;
		unheard.insert(name);
	}
	
	for(int i = 0; i < m; i++){
		
		string name;
		cin >> name;
		notSaw.push_back(name);
	}
	
	vector<string> neither;
	
	for(const string& name : notSaw){
		
		if(unheard.count(name)){
			neither.push_back(name);
		}
	}
	
	sort(neither.begin(), neither.end());
	
	cout << neither.size() << "\n";
	for(const string& name : neither){
		
		cout << name << "\n";
	}
	
	return 0;
}
