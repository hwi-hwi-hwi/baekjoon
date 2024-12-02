#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	queue<int> q;
	for(int i = 1; i <= n; i++){
		
		q.push(i);
	}
	
	vector<int> discard;
	while(q.size() > 1){
		
		discard.push_back(q.front());
		q.pop();
		
		q.push(q.front());
		q.pop();
	}
	
	for(int i = 0; i < discard.size(); i++){
		
		cout << discard[i] << " ";
	}
	cout << q.front();
	
	return 0;
}
