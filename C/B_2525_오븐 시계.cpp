#include <stdio.h>

int main(){

	int h, m;
	scanf("%d %d", &h, &m);
	
	int need;
	scanf("%d", &need);
	
	m += need;
	
	while(m >= 59){
	
		if(m>= 60){
			h++;
			m -= 60;
			if(h >= 24){
				h = 0;
			}
		}
	}	
	
	printf("%d %d", h, m); 
	
	return 0;
}
