#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int x1,y1,r1,x2,y2,r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		double d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		int ans(0);
		
		if(d == 0 && r1 == r2)  // �� ���� ������ ���� ���
			ans = -1;
		else if(d > (r1 + r2))  // �� ���� ���� ��ġ�� ���� ���
			ans = 0;
		else if(d < abs(r2 - r1))   // �� ���� �ٸ� �� ���ο� ������ ������ ���� ���
			ans = 0;	
		else if(d == abs(r2- r1))  // �� ���� �ٸ� �� ���ο��� ������ ���
			ans = 1;
		else if(d == (r1 + r2))  // �� ���� ������ ���
			ans = 1;
		else if(abs(r2 - r1) < d || d < (r1 + r2))  // �� ���� �� ������ ���� ���
			ans = 2;
		
		cout << ans << "\n";
	}
	
	return 0;
}
