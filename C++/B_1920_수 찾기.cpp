#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false); // C++의 입출력과 C 스타일 입출력의 동기화를 비활성화하여 입출력 속도를 높임
    cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 출력을 더 빠르게 만듦
    
	int n;
	cin >> n;
	
	unordered_set<int> input;
	for(int i = 0; i < n; i++){
		
		int value;
		cin >> value;
		input.insert(value);
	}
	
	int m;
	cin >> m;
	
	vector<int> check(m);
	for(int i = 0; i < m; i++){
		
		cin >> check[i];
	}
	
	for(int i = 0; i < m; i++){
		
		if(input.find(check[i]) != input.end())
			cout << '1' << '\n';
		else
			cout << '0' << '\n';
	}
	
	return 0;
}
