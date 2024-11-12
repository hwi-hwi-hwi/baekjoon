#include <iostream>
#include <vector>
#include <cmath> // abs를 사용하기 위해 추가

using namespace std;

int main(){
    int n;
    cin >> n;

    // 배열 대신 벡터를 사용하여 동적 할당
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    int sum = 0;

    // 모든 막대의 윗면과 아랫면 계산
    sum += 2 * n;

    // 모든 막대의 앞면과 뒷면 계산
    for (int i = 0; i < n; i++) {
        sum += h[i] * 2;
    }

    // 좌우면 계산
    sum += h[0]; // 첫 번째 막대의 왼쪽 면
    sum += h[n - 1]; // 마지막 막대의 오른쪽 면
    for(int i = 0; i < n-1; i++){
        // 인접한 막대 사이의 높이 차이
        sum += abs(h[i] - h[i+1]);
    }

    cout << sum << endl;

    return 0;
}

