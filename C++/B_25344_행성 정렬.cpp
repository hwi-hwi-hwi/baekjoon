#include <iostream>
#include <vector>
#include <algorithm> // std::gcd
using namespace std;

// GCD�� ���ϴ� �Լ� (��Ŭ���� �˰���)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// LCM�� ���ϴ� �Լ�
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // a * b / gcd(a, b) �� ������ ������ �ٲ� ��
}

int main() {
    int n;
    cin >> n;
    vector<int> periods(n - 2);
    
    for (int i = 0; i < n - 2; ++i) {
        cin >> periods[i];
    }
    
    // ��ü LCM ���
    int result = periods[0];
    for (int i = 1; i < n - 2; ++i) {
        result = lcm(result, periods[i]);
    }
    
    cout << result << endl;
    return 0;
}

