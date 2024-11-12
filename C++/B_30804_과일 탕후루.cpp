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
	
	// ������ ������ ������ ������ �ؽø�
	unordered_map<int, int> count;
	int left = 0, max_length = 0;
	
	// ������ �����͸� ����Ͽ� �迭�� Ž��
	for(int right = 0; right < n; right++){
		
		// ���� right �����Ͱ� ����Ű�� ������ �����쿡 �߰��ϰ�,
		// �� ������ ������ 1 ���� 
		count[fruits[right]]++;
		
		// ���� ������ �� ������ �ʰ��ϸ� ���� �����͸� �̵�
		while(count.size() > 2){
			
			count[fruits[left]]--;  // ���� ���� ���� ����
			
			if(count[fruits[left]] == 0)
				count.erase(fruits[left]);  // ������ 0�� �Ǹ� �ش� ���� ����
				
			left++;  // ���� ������ �̵�
		}
		
		max_length = max(max_length, (right-left+1));
	}
	
	cout << max_length;	
	
	return 0;
}
