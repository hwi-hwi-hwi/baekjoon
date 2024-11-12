#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> fruits(n);
	for(int i = 0; i < n; i++){
		
		cin >> fruits[i];
	}
	
	// 과일의 종류별 개수를 저장할 해시맵
	unordered_map<int, int> count;
	int left = 0, max_length = 0;
	
	// 오른쪽 포인터를 사용하여 배열을 탐색
	for(int right = 0; right < n; right++){
		
		// 현재 right 포인터가 가리키는 과일을 윈도우에 추가하고,
		// 그 과일의 개수를 1 증가 
		count[fruits[right]]++;
		
		// 과일 종류가 두 종류를 초과하면 왼쪽 포인터를 이동
		while(count.size() > 2){
			
			count[fruits[left]]--;  // 왼쪽 과일 개수 감소
			
			if(count[fruits[left]] == 0)
				count.erase(fruits[left]);  // 개수가 0이 되면 해당 과일 제거
				
			left++;  // 왼쪽 포인터 이동
		}
		
		max_length = max(max_length, (right-left+1));
	}
	
	cout << max_length;	
	
	return 0;
}
