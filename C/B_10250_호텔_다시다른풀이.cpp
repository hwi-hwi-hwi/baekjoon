#include <stdio.h>

int main(){
	
	int h, w, n, t, room;
	
	scanf("%d", &t);
	
	while(t--){
		
		scanf("%d %d %d", &h, &w, &n);  // h類 w�� n廓 
		
		// n % h -> 釭該雖 = 類
		// n / h -> 跟+ 1 = ��
		// n % h = 0 -> h(類) = h
		
		if(n % h == 0){
			//	�ˉ� =    類     �� 
			room = (h*100) + (n/h);
		}
		else{
			room = (n%h)*100 + (n/h +1);
		}
		
		printf("%d\n", room);
	}
	
	return 0; 
}

