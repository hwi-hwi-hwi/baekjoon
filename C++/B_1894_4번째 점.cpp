#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double x1, y1, x2, y2, x3, y3, x4, y4;
	
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
		
		// ���� �������� ���ϱ�
		// �� ��° �� D�� A���� (C - B)��ŭ �̵��� ��ǥ�̴�. (���� �̿�) 
		// D = A + (C - B)
		double xD = x1 + (x3 - x2);
		double yD = y1 + (y3 - y2);
		
		cout << fixed << setprecision(3) << xD << " " << yD << endl;
	}
	
	return 0;
}
