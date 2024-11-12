#include <iostream>
#include <climits>

using namespace std;

int main(){
	
	// n: �������� ��
	// k: �־����� �ݶ��� ��
	// a: 1�ʿ� ���� �� �ִ� �ݶ��� ��
	
	int n, k, a;
	cin >> n >> k >> a;
	 
	int min_time = INT_MAX;  // �ּڰ��� ������ ����
	
	// t: �����ڰ� �� ���� �ݶ� ���ô� �ð� (��)
	// s: �����ڰ� �ݶ� ���� �� ���� �ð� (��)
	for(int i = 0; i < n; i++){
		
		int t, s;
		cin >> t >> s;
		
		int one_cycle_coke = t * a;  // �� �ֱ� ���� ���� �� �ִ� �ݶ� ��
		int one_cycle_time = t + s;  // �� �ֱ� ���� �ɸ��� �ð�
		
		int total_cycle = k / one_cycle_coke;  // �ʿ��� ��ü �ֱ� ��
		int remaining_coke = k % one_cycle_coke;  // ���� �ݶ� ��
		
		int total_time = total_cycle * one_cycle_time;
		
		if (remaining_coke > 0) {
            int additional_time = (remaining_coke + a - 1) / a; // ���� �ݶ� ���ôµ� �ʿ��� �߰� �ð�
            total_time += additional_time;
        } else {
            total_time -= s; // ���� �ݶ� ���ٸ� ������ ���� �ð� ����
        }

		if(total_time < min_time)
			min_time = total_time;
	}
	
	cout << min_time;
	
	return 0;
}
