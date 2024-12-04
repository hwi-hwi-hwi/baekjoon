#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--){
		
		int t;
		cin >> t;
		
		unordered_map<long long, int> num;
		for(int i = 0; i < t; i++){
			
			long long soldier;
			cin >> soldier;
			num[soldier]++;
		}
		
		long long maxNum = -1;  // ���� ���� ���� ��ȣ 
		long long max = 0;  // Ư�� ��ȣ ���� ���� Ƚ�� 
		for(auto& pair : num){
			
			if(pair.second > max){
				max = pair.second;
				maxNum = pair.first;
			}
		}
		
		if(max > t/2)
			cout << maxNum << "\n";
		else
			cout << "SYJKGW" << "\n";
	}
	
	return 0;
}
