#include <iostream>
#include <vector>
#include <algorithm> // std::gcd
using namespace std;

// GCD를 구하는 함수 (유클리드 알고리즘)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// LCM을 구하는 함수
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // a * b / gcd(a, b) 를 나누기 순서를 바꾼 것
}

int main() {
    int n;
    cin >> n;
    vector<int> periods(n - 2);
    
    for (int i = 0; i < n - 2; ++i) {
        cin >> periods[i];
    }
    
    // 전체 LCM 계산
    int result = periods[0];
    for (int i = 1; i < n - 2; ++i) {
        result = lcm(result, periods[i]);
    }
    
    cout << result << endl;
    return 0;
}

