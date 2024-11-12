#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int Q1 = 0;
	int Q2 = 0;
	int Q3 = 0;
	int Q4 = 0;
	int AXIS = 0;
	
	int input[3];
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j <= 1; j++){
			
			scanf("%d", &input[j]);
		}
		
		if(input[0] == 0 || input[1] == 0)	AXIS++;
		else if(input[0] > 0 && input[1] > 0)	Q1++;
		else if(input[0] < 0 && input[1] > 0)	Q2++;
		else if(input[0] < 0 && input[1] < 0)	Q3++;
		else if(input[0] > 0 && input[1] < 0)	Q4++;
	}
	
	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d", AXIS);
	
	return 0;
}
