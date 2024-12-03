#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	string name, commute;
	unordered_set<string> people;
	while(n--){
		
		cin >> name >> commute;
		
		if(commute == "enter"){
			people.insert(name);
		}
		else if(commute == "leave"){
			people.erase(name);
		}
	}
	
	vector<string> result(people.begin(), people.end());
	sort(result.rbegin(), result.rend());
	
	for(const auto& person : result){
		
		cout << person << "\n";
	}
	
	return 0;
}
