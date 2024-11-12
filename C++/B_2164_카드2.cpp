#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	queue<int> cards;
	
	// 큐에 카드 번호 삽입
	for(int i = 1; i <= n; i++){
		
		cards.push(i);
	}
	
	while(cards.size() > 1){
		
		// 제일 위에 있는 카드 버리기
		cards.pop();
		// 제일 위에 있는 카드 확인하고 그 카드 제거 
		int topCard = cards.front();
		cards.pop();
		// 제거한 카드를 큐의 맨 뒤로 옮기기
		cards.push(topCard);
	}
	
	cout << cards.front();
	
	return 0;
}
