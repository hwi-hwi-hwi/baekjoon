#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int max_score = 0;  // �ְ� ������ ������ ����
    
    for (int i = 0; i < n; i++) {
        int a, d, g;
        cin >> a >> d >> g;
        
        int score = a * (d + g);
        if (a == (d + g)) {
            score *= 2;  // ������ �����ϸ� ������ �� ���
        }
        
        if (score > max_score) {
            max_score = score;  // �ְ� ���� ����
        }
    }
    
    cout << max_score;
    
    return 0;
}

