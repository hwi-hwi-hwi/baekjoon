#include <iostream>
#include <set>

using namespace std;

int main(){
	
	int a_size, b_size;
	cin >> a_size >> b_size;
	
	set<int> a, b;
	int x;
	
	for(int i = 0; i < a_size; i++){
		
		cin >> x;
		a.insert(x);
	}
	for(int i = 0; i < b_size; i++){
		
		cin >> x;
		b.insert(x);
	}
	
	int ans = 0;
	
	for(const auto& element : a){
		
		if(b.find(element) == b.end())
			ans++;
	}
	
	for(const auto& element : b){
		
		if(a.find(element) == a.end())
			ans++;
	}
	
	cout << ans;
	
	return 0;
}
