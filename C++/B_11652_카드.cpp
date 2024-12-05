#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	unordered_map<long long, int> num;
	while(n--){
		
		long long x;
		cin >> x;
		
		num[x]++;
	}
	
	long long freqNum = 0;  // �ִ� Ƚ���� ����  ��ȣ 
	int freqCount = 0;  // �ִ� Ƚ�� 
	
	for(auto& pair : num){
		
		long long number = pair.first;
		int count = pair.second;
		
		if(count > freqCount || (count == freqCount && number < freqNum)){
			freqCount = count;
			freqNum = number;
		}
	}
	
	cout << freqNum;
	
	return 0;
}
