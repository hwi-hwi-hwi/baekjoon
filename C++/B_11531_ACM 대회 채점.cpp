#include <iostream>

using namespace std;

int main(){
	
	// �г�Ƽ:  ������ ���� �ð� + Ʋ�� Ƚ��*20
	int m;
	string prob, result;
	
	int correct(0), total_time(0);
	
	int wrong_count[26] ={0};  // �� ������ ���� �߸��� �õ� Ƚ���� �����ϴ� �迭
	
	
	while(true){
		
		cin >> m;
		if(m == -1)		break;
		cin >> prob >> result;
		
		int prob_index = prob[0] - 'A';
		// 'A'�� 0, 'B'�� 1, ... 'Z'�� 25
		
		
		if(result == "wrong"){
			// �ش� ������ Ʋ�� Ƚ�� ����
			wrong_count[prob_index]++;
		}
		else if(result == "right"){
			correct++;
			total_time += m + (wrong_count[prob_index] * 20);
		}
	}
	
	cout << correct << " " << total_time;
	
	return 0;
}
