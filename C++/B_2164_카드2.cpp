#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	queue<int> cards;
	
	// ť�� ī�� ��ȣ ����
	for(int i = 1; i <= n; i++){
		
		cards.push(i);
	}
	
	while(cards.size() > 1){
		
		// ���� ���� �ִ� ī�� ������
		cards.pop();
		// ���� ���� �ִ� ī�� Ȯ���ϰ� �� ī�� ���� 
		int topCard = cards.front();
		cards.pop();
		// ������ ī�带 ť�� �� �ڷ� �ű��
		cards.push(topCard);
	}
	
	cout << cards.front();
	
	return 0;
}
