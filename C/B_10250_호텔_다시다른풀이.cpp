#include <stdio.h>

int main(){
	
	int h, w, n, t, room;
	
	scanf("%d", &t);
	
	while(t--){
		
		scanf("%d %d %d", &h, &w, &n);  // hÃþ wÈ£ n¹ø 
		
		// n % h -> ³ª¸ÓÁö = Ãþ
		// n / h -> ¸ò+ 1 = È£
		// n % h = 0 -> h(Ãþ) = h
		
		if(n % h == 0){
			//	È£¼ö =    Ãþ     È£ 
			room = (h*100) + (n/h);
		}
		else{
			room = (n%h)*100 + (n/h +1);
		}
		
		printf("%d\n", room);
	}
	
	return 0; 
}

