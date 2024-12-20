#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<pair<int, int>> meetings;
	while(n--){
		int start, end;
		cin >> start >> end;
		meetings.push_back({end, start}); 
	}
	// 회의가 끝나는 시간이 빠를수록 
	// 더 많은 회의를 배치할 가능성이 높으므로,
	// 회의의 종료 시간 기준으로 정렬
	sort(meetings.begin(), meetings.end());
	
	int count = 0;
	int last_end_time = 0;
	
	for(const auto& meet : meetings){
		int end = meet.first;
		int start = meet.second;
		
		if(start >= last_end_time){
			count++;
			last_end_time = end;
		}
	}
	
	cout << count;
	
	return 0;
}
