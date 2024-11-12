#include <stdio.h>

int main(){

	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	
	// (A-B)(n-1) + A กร V
	
	int day = (v-b) / (a-b);
	
	if((v-b) % (a-b) != 0){
		day++;
	} 
	
	printf("%d", day);
	
	return 0;
}
