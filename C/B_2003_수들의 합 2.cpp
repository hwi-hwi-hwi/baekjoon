#include <stdio.h>

int main(){
	
	// ���� n�� �߿��� ������ m����� 
	int n, m;
	scanf("%d %d", &n, &m);
	
	int a[10000];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &a[i]);
	} 
	
	
	int check = 0;
	for(int i = 0; i < n; i++){
		
		int sum = 0;
		
		for(int j = i; j < n; j++){
			
			sum += a[j];
			
			if(sum == m){
				check++;
				break;
			}
		}
	}
	
	printf("%d", check);
	
	return 0;
}
