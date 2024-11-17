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
		
		if(d == 0 && r1 == r2)  // 두 원이 동일한 원일 경우
			ans = -1;
		else if(d > (r1 + r2))  // 두 원이 서로 겹치지 않을 경우
			ans = 0;
		else if(d < abs(r2 - r1))   // 한 원이 다른 원 내부에 있지만 접하지 않을 경우
			ans = 0;	
		else if(d == abs(r2- r1))  // 한 원이 다른 원 내부에서 내접할 경우
			ans = 1;
		else if(d == (r1 + r2))  // 두 원이 외접할 경우
			ans = 1;
		else if(abs(r2 - r1) < d || d < (r1 + r2))  // 두 원이 두 점에서 만날 경우
			ans = 2;
		
		cout << ans << "\n";
	}
	
	return 0;
}
