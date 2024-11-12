#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d",  &a, &b);
	
	int G_com_M, L_com_multi;
	int large, small;
	if(a >= b){
		large = a;
		small = b;
	}
	else if(b > a){
		large = b;
		small = a;
	}

	
	for(int i = 1; i <= small; i++){
		
		if(large % i == 0 && small % i == 0){
			G_com_M = i;
		}
	}
	
	L_com_multi = (a * b) / (G_com_M);
	
	// A * B = (G*a) (G*b) = L * G
	// L = G *a * b
	
	printf("%d\n", G_com_M);
	printf("%d", L_com_multi);
	
	return 0;
}
