#include <iostream>
#include <vector>
#include <cmath> // abs�� ����ϱ� ���� �߰�

using namespace std;

int main(){
    int n;
    cin >> n;

    // �迭 ��� ���͸� ����Ͽ� ���� �Ҵ�
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    int sum = 0;

    // ��� ������ ����� �Ʒ��� ���
    sum += 2 * n;

    // ��� ������ �ո�� �޸� ���
    for (int i = 0; i < n; i++) {
        sum += h[i] * 2;
    }

    // �¿�� ���
    sum += h[0]; // ù ��° ������ ���� ��
    sum += h[n - 1]; // ������ ������ ������ ��
    for(int i = 0; i < n-1; i++){
        // ������ ���� ������ ���� ����
        sum += abs(h[i] - h[i+1]);
    }

    cout << sum << endl;

    return 0;
}

