#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n, m;
		cin >> n >> m;
		
		queue<pair<int, int>> que;
		priority_queue<int> pq;
		for(int i = 0; i < n; i++){
			
			int imp;
			cin >> imp;
			
			que.push({imp, i});  // {중요도, 인덱스}
			pq.push(imp); 
		}
		
		int count = 1;
		while(true){
			
			int imp = que.front().first;
			int idx = que.front().second;
			
			if(imp != pq.top()){
				que.push({imp, idx});
				que.pop();
			}
			else{
				if(idx == m)	break;
				else{
					que.pop();
					pq.pop();
					count++;
				}
			}
		}
		
		cout << count << "\n";
	}
	
	return 0;
}
