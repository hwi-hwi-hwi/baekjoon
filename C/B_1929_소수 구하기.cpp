#include <stdio.h>
#include <math.h>  // sqrt(������) ����ϱ� ����

int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	
	for(int i = m; i <= n; i++){
		
		int check = 0;
		
		if(i == 1)	continue;
		
		for(int j = 2; j <= sqrt(i); j++){
			
			if(i % j == 0){
				check = 1;
				break;  // �ð� ���� 
			}
		}
		
		if(check == 0)	printf("%d\n", i);
	}
	
	return 0;
}








// �ð� �ʰ� 
/*
int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	
	for(int i = m; i <= n; i++){
		
		int check = 0;
		
		for(int j = 2; j <= i-1; j++){
			
			if(i % j == 0)	check++;
		}
		
		if(check == 0)	printf("%d\n", i);
	}
	
	return 0;
}
*/
