#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int max_score = 0;  // 최고 점수를 저장할 변수
    
    for (int i = 0; i < n; i++) {
        int a, d, g;
        cin >> a >> d >> g;
        
        int score = a * (d + g);
        if (a == (d + g)) {
            score *= 2;  // 조건을 만족하면 점수를 두 배로
        }
        
        if (score > max_score) {
            max_score = score;  // 최고 점수 갱신
        }
    }
    
    cout << max_score;
    
    return 0;
}

