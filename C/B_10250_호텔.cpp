#include <stdio.h>

int main(){
	
	int w, h, n;  // wȣ h�� n��° 
	int t;  // �׽�Ʈ ���̽� ����
	
	int room[9802];
	
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		
		scanf("%d %d %d", &h, &w, &n);
		
		for(int j = 1, l = 0; j <= w; j++){  // j ȣ 
		
			for(int k = 1; k <= h; k++){  // k �� 
				room[l] = (k*100) + (j);
				l++;
			}
		}
		
		printf("%d\n", room[n-1]);
	}
	
	return 0; 
}
