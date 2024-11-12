#include <stdio.h>
#include <string.h>

int main(){
	
	// 테이스케이스 개수 t
	int t;
	scanf("%d", &t);
	
	
	// r번 반복 1<=r<=8, 문자열 s 
	int r;
	char s[20];
	for(int i = 0; i < t; i++){  // t 만큼 입력받기 

		scanf("%d %s", &r, s);
		
		for(int j= 0; j < strlen(s); j++){  // 문자열s 순서대로 
			
			for(int k = 0; k < r; k++){  // 반복횟수 r만큼 s출력 
				printf("%c", s[j]);
			}		
		}
		
		printf("\n");
	}

	return 0;
}
