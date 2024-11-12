#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // ���� ����
    vector<string> pattern = {
        "baby", "sukhwan", "tururu", "turu",
        "very", "cute", "tururu", "turu",
        "in", "bed", "tururu", "turu",
        "baby", "sukhwan"
    };

    // ���� �ε��� ��� (n�� 1���� �����ϹǷ� n-1)
    int index = (n - 1) % 14;
    string word = pattern[index];

    // �ݺ��Ǵ� 'ru' ���� ���
    int loop_ru_count = (n - 1) / 14;

    if (word == "tururu" || word == "turu") {
        int base_ru_count = (word == "tururu") ? 2 : 1;
        int total_ru_count = base_ru_count + loop_ru_count;

        if (total_ru_count >= 5) {
            cout << "tu+ru*" << total_ru_count; // 'ru'�� 5�� �̻��� ��
        } else {
            if(word == "tururu"){
            	cout << "turu";
            	
            	for(int i = 0; i <= total_ru_count-2; i++){
            	
					cout << "ru";
				}
			}
			else{
				cout << "tu";
				
				for(int i = 0; i <= total_ru_count-1; i++){
					
					cout << "ru";
				}
			}
        }
    } else {
        cout << word; // �Ϲ� �ܾ�� �״�� ���
    }

    return 0;
}

