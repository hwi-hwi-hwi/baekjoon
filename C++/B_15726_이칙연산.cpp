#include <iostream>

using namespace std;

int main(){
	
	long long a, b, c, ans1, ans2;;
	cin >> a >> b >> c;
	
	ans1 = (double) a * b / c;
	ans2 = (double) a * c / b;
	
	if(ans1 > ans2)		cout << ans1;
	else	cout << ans2;
	
	return 0;
}
