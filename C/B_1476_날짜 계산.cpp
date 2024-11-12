#include <stdio.h>

int main(){
	
	// 지구 E, 태양 S, 달 M
	//  1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19
	
	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);
	
	int E = 0;
	int S = 0;
	int M = 0;
	int year = 0;
	
	while(1){
		
		year++;
		E++;
		S++;
		M++;
		
		if(E == 16)		E = 1;
		if(S == 29)		S = 1;
		if(M == 20)		M = 1;
		
		if(E == e && S == s && M == m)	break;
	}
	
	printf("%d", year);
	
	return 0;
}
