#include <iostream>
#include <cmath>

using namespace std;

int zOrder(int n, int r, int c);

int main(){
	
	int n, r, c;
	cin >> n >> r >> c;
	
	cout << zOrder(n, r, c);
	
	return 0;
}

int zOrder(int n, int r, int c){
	if(n == 0)	return 0;
	
	int half = pow(2, n-1);  // 하위 배열 크기
	int quadSize = half * half;  // 한 사분면의 크기
	
	if(r < half && c < half){  // 1 사분면 
		return zOrder(n-1, r, c);
	}
	else if(r < half && c >= half){  // 2 사분면
		c -= half;
		return quadSize + zOrder(n-1, r, c);
	}
	else if(r >= half && c < half){  // 3 사분면
		r -= half;
		return 2*quadSize + zOrder(n-1, r, c);
	}
	else if(r >= half && c >= half){  // 4 사분면
		r -= half;
		c -= half;
		return 3*quadSize + zOrder(n-1, r, c);
	}
}
