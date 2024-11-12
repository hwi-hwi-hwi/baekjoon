#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double x1, y1, x2, y2, x3, y3, x4, y4;
	
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
		
		// 벡터 연산으로 구하기
		// 네 번째 점 D는 A에서 (C - B)만큼 이동한 좌표이다. (평행 이용) 
		// D = A + (C - B)
		double xD = x1 + (x3 - x2);
		double yD = y1 + (y3 - y2);
		
		cout << fixed << setprecision(3) << xD << " " << yD << endl;
	}
	
	return 0;
}
