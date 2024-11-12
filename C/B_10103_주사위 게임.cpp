#include <stdio.h>

struct dice{
	
	int a;
	int b;
};

int main(){
	
	//  낮은 숫자 나온 사람이 상대방 주사위 숫자만큼 점수 잃음
	// 같은 숫자면 아무도 점수 잃지 않음
	
	int n;
	scanf("%d", &n);
	
	int a_score = 100;
	int b_score = 100;
	
	for(int i = 0; i < n; i++){
		
		struct dice each;
		scanf("%d %d", &each.a, &each.b);
		
		if(each.a > each.b)		b_score -= each.a;
		else if(each.b > each.a)	a_score -= each.b;
	}
	
	printf("%d\n%d", a_score, b_score);
	
	return 0;
}
