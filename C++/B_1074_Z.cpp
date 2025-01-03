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
	
	int half = pow(2, n-1);  // ���� �迭 ũ��
	int quadSize = half * half;  // �� ��и��� ũ��
	
	if(r < half && c < half){  // 1 ��и� 
		return zOrder(n-1, r, c);
	}
	else if(r < half && c >= half){  // 2 ��и�
		c -= half;
		return quadSize + zOrder(n-1, r, c);
	}
	else if(r >= half && c < half){  // 3 ��и�
		r -= half;
		return 2*quadSize + zOrder(n-1, r, c);
	}
	else if(r >= half && c >= half){  // 4 ��и�
		r -= half;
		c -= half;
		return 3*quadSize + zOrder(n-1, r, c);
	}
}
