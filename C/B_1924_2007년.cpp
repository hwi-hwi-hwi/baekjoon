#include <stdio.h>

int main(){
	
	int m, d;
	scanf("%d %d", &m, &d);
	
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	char *dayweek[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	
	for(int i = 0; i < m - 1; i++){
		
		d += month[i];
	}
	
	printf("%s", dayweek[d % 7]);
	
	return 0;
}
