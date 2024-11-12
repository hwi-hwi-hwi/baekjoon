#include <stdio.h>

int main(){
	
	int buger[3], co, sp;
	int min = 2000;
	
	for(int i = 0; i < 3; i++){
		
		scanf("%d", &buger[i]);
		if(buger[i] < min)	min = buger[i];
	}
	scanf("%d", &co);
	scanf("%d", &sp);
	
	int min_2 = co;
	if(sp < min_2)	min_2 = sp;
	
	printf("%d", min+min_2-50);
	
	return 0;
}
