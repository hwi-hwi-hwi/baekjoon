#include <stdio.h>

int main(){
	
	int h, w, n, t, room;
	
	scanf("%d", &t);
	
	while(t--){
		
		scanf("%d %d %d", &h, &w, &n);  // h�� wȣ n�� 
		
		// n % h -> ������ = ��
		// n / h -> ��+ 1 = ȣ
		// n % h = 0 -> h(��) = h
		
		if(n % h == 0){
			//	ȣ�� =    ��     ȣ 
			room = (h*100) + (n/h);
		}
		else{
			room = (n%h)*100 + (n/h +1);
		}
		
		printf("%d\n", room);
	}
	
	return 0; 
}

