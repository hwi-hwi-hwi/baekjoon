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
	// ȸ�ǰ� ������ �ð��� �������� 
	// �� ���� ȸ�Ǹ� ��ġ�� ���ɼ��� �����Ƿ�,
	// ȸ���� ���� �ð� �������� ����
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
